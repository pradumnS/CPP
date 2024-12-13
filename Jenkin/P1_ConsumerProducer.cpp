#include "P1_ConsumerProducer.hpp"


consumerProducer::consumerProducer(const int &sz, bool signal) : maxSize(sz), consumeSignal(signal)
{

}

void consumerProducer::producer()
{
    for (size_t i = 1; i < maxSize; i++)
    {
        // std::lock_guard<std::mutex>lck(mtx);
        // qData.push(i);
        // std::cout<< " produced data "<< qData.front() << std::endl;

        std::unique_lock<std::mutex>lck(mtx);
        cv.wait(lck, [this] {return qData.size() < maxSize; });
        qData.push(i);
        //std::cout<< " produced data "<< qData.back() << std::endl;
        cv.notify_one();
    }

}

void consumerProducer::counsumer()
{
    for (size_t i = 1; i < maxSize; i++)
    {
        std::unique_lock<std::mutex>lck(mtx);
        // the enclosing-function 'this' cannot be referenced in a lambda body unless it is in the capture listC/C++(1738)
        // to solve above issue capture as this
        cv.wait(lck, [this] {return !qData.empty(); });
        int consumedData = qData.front();
        //std::cout<< " consumed data "<< consumedData << std::endl;
        qData.pop();
        cv.notify_one();
    }
    

}
void consumerProducer::producerInSequence()
{
    for (size_t i = 1; i < maxSize; i++)
    {
        std::unique_lock<std::mutex>lck(mtx);
        cv.wait(lck, [this] {return !consumeSignal; });
        qData.push(i);
        std::cout<< " produced data "<< qData.back() << std::endl;
        consumeSignal = true;
        cv.notify_one();
    }
}
void consumerProducer::counsumeInSequence()
{
    for (size_t i = 1; i < maxSize; i++)
    {
        std::unique_lock<std::mutex>lck(mtx);
        cv.wait(lck, [this] {return consumeSignal; });
        int consumedData = qData.front();
        std::cout<< " consumed data "<< consumedData << std::endl;
        qData.pop();
        consumeSignal = false;
        cv.notify_one();
    }
}

void consumerProducer::Initialiser() 
{
    consumerProducer cp(5,false);
    // invalid use of non-static member function ‘void consumerProducer::producer()’
    // std::thread producerThread(consumerProducer::producer);

    std::thread producerThread(&consumerProducer::producer, &cp);
    //  error: invalid use of non-static member function ‘void consumerProducer::counsumer()’
    //  std::thread consumerThread(consumerProducer::counsumer, &cp);

    std::thread consumerThread(&consumerProducer::counsumer, &cp);

    std::thread consumerThread1(&consumerProducer::counsumeInSequence, &cp);
    std::thread producerThread1(&consumerProducer::producerInSequence, &cp);

    consumerThread.join();
    producerThread.join();

    consumerThread1.join();
    producerThread1.join();

} 

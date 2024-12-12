#include "threadPool.hpp"

/* this constructor will initialise the threadpoll
which mean it will receive no of thread will pool have
Then it will call workerthread */
threadPool::threadPool(size_t numThread) : stop(false)
{
   for (size_t i = 0; i < numThread; i++)
   {
        workers.emplace_back([this] {
            workerThread();
        });
   }
}
threadPool::~threadPool()
{
    {
        std::unique_lock<std::mutex>lck(qmtx);
        stop = true;
    }
    cv.notify_all();
    for(auto &vThread : workers)
        vThread.join();
}
void threadPool::workerThread()
{
    /* this will get called for each iteration from the for loop 
    now we want each thread should be in active and wait contion to get task to perfor
    */
   /* this infinte loop will keep pool threads alive untill there are task or pool is active
   bool flag become true which mean threads joined */
   while(true)
   {
        // this will used as lambda or functor or func pointer
        std::function<void()>task;

        std::unique_lock<std::mutex>lck(qmtx);
        // it will wait untill task has been enqueued or assigned to perform.
        cv.wait(lck, [this]
        {
            return !tasks.empty() || stop;
        });

        if(stop && tasks.empty())
            return;
        /* if we are here that mean task has been enqueued that meean we need to perform assigned task.
        and then clear the queue which got task */

        task = std::move(tasks.front());
        tasks.pop();

        /* whichever task assigned it will perform that task */
        task();
   }

}
/* this will add func passed as lambda
   receiving the lambda into functor 

    std::function<void()> : 
    type-safe wrapper for storing and invoking callable objects. These callable objects can include:
    Regular functions
    Lambda expressions
    Bind expressions (e.g., std::bind)
    Function pointers
    Objects with an overloaded operator()
    */
void threadPool::enqueueTask(const std::function<void()>& task)
{
    std::unique_lock<std::mutex>lck(qmtx);
    tasks.emplace(task);
    cv.notify_all();
}
void threadPool::add(size_t a, size_t b)
{
    a += b;
    std::cout<< " add func triggered : "<< a << std::endl;
}
void threadPool::sub(size_t a, size_t b)
{

}
void threadPool::initialserthreadPool()
{
    threadPool tp(5);
    /*  you need to ensure the non-static function add is called on a specific instance of the class. 
    Since threadPool is instantiated as tp in your static function, you should pass tp as the object to call the add method on. */
    tp.enqueueTask([&tp]()
    {
        tp.add(10,20);
    });

}
        // std::vector<std::thread>workers;
        // std::queue<std::function<void()>>tasks;
        // std::mutex qmtx;
        // std::atomic<bool>stop;
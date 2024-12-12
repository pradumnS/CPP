
#include "threadSafeCounter.hpp"

threadSafeCounter::threadSafeCounter(const size_t& num) : counterN(num)
{

}

void threadSafeCounter::thread1()
{
    std::lock_guard<std::mutex>lck(mtx);
    std::cout<< " Counter I "<< counterN++ << std::endl;
}
void threadSafeCounter::thread2()
{
    std::lock_guard<std::mutex>lck(mtx);
    std::cout<< " Counter D "<< counterN-- << std::endl;
}
void threadSafeCounter::thread3()
{

}
void threadSafeCounter::initialserthreadSafeCounter()
{
    threadSafeCounter ts(1);
    std::vector<std::thread>vThread;

    for (size_t i = 1; i < 5; i++)
    {
        vThread.emplace_back([&]() {
        for (int j = 0; j < 100; ++j) {
            ts.thread1(); 
        }});
    }
    for (size_t i = 1; i < 5; i++)
    {
        vThread.emplace_back([&]() {
        for (int j = 0; j < 100; ++j) {
            ts.thread2();
        }});
    }

    //"std::thread::thread(const std::thread &)" (declared at line 155 of "/usr/include/c++/11/bits/std_thread.h")
    // cannot be referenced -- it is a deleted function
    // 
    for(auto &th : vThread)
    {
        th.join();
    }
    
    


    std::thread th1(&threadSafeCounter::thread1, &ts);
    std::thread th2(&threadSafeCounter::thread1, &ts);
    std::thread th3(&threadSafeCounter::thread1, &ts);

    std::thread th4(&threadSafeCounter::thread2, &ts);
    std::thread th5(&threadSafeCounter::thread2, &ts);
    std::thread th6(&threadSafeCounter::thread2, &ts);

    th1.join(); th2.join(); th3.join();
    th4.join(); th5.join(); th6.join();
    //evenThread.join();
}

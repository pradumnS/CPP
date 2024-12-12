#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <condition_variable>

class threadSafeCounter 
{
    public:
        threadSafeCounter();
        threadSafeCounter(const size_t& counter);

        void thread1();
        void thread2();
        void thread3();

        static void initialserthreadSafeCounter();

    private:
        std::mutex mtx;
        size_t maxSize;
        std::condition_variable cv;
        size_t counterN;
};

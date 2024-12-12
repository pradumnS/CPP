#include <iostream>
#include <thread>
#include <mutex>
#include <functional>
#include <queue>
#include <atomic>
#include <condition_variable>

class threadPool 
{
    public:
        threadPool(size_t numThread);
        ~threadPool();
        static void initialserthreadPool();
        void enqueueTask(const std::function<void()>& task);
        void add(size_t a, size_t b);
        void sub(size_t a, size_t b);
private:
        void workerThread();
        std::vector<std::thread>workers;
        std::queue<std::function<void()>>tasks;
        std::mutex qmtx;
        std::atomic<bool>stop;

        size_t maxSize;
        std::condition_variable cv;
        size_t oddEvenNumber;
};

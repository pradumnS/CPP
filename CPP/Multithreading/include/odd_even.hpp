#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

class oddEven 
{
    public:
        oddEven();
        oddEven(const int& sz);

        void odd();
        void even();

        static void initialserOddEven();

    private:
        std::mutex mtx;
        size_t maxSize;
        std::condition_variable cv;
        size_t oddEvenNumber;
};

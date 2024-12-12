#include "odd_even.hpp"

oddEven::oddEven(){}
oddEven::oddEven(const int &sz) : maxSize(sz)
{
    oddEvenNumber = 0;
}
void oddEven::odd()
{
    for (size_t i = 0; i < maxSize; i++)
    {
        std::unique_lock<std::mutex>lck(mtx);
        cv.wait(lck, [this] { return oddEvenNumber%2 == 1;});
        std::cout<< "odd : "<< oddEvenNumber++ << std::endl;
        cv.notify_one();

    }
    
}
void oddEven::even()
{
    for (size_t i = 0; i < maxSize; i++)
    {
        std::unique_lock<std::mutex>lck(mtx);
        cv.wait(lck, [this] { return oddEvenNumber%2 == 0;});
        std::cout<< "even : "<< oddEvenNumber++ << std::endl;
        cv.notify_one();
    }
}
void oddEven::initialserOddEven()
{
    oddEven oe(3);

    std::thread oddThread(&oddEven::odd, &oe);
    std::thread evenThread(&oddEven::even, &oe);

    oddThread.join();
    evenThread.join();
}

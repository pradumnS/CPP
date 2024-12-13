#include <iostream>
#include "P1_ConsumerProducer.hpp"

int main()
{
    std::cout<< " main func get called "<<std::endl;
    consumerProducer::Initialiser();
    //oddEven::initialserOddEven();
    //threadSafeCounter::initialserthreadSafeCounter();
    //threadPool::initialserthreadPool();
    std::cout<< "hello" <<std::endl;
}
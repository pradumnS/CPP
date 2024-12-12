#include <iostream>
#include "filesReadWrite.hpp"

int main()
{
    std::cout<< " main func get called "<<std::endl;
    files::initializerFiles();
    std::cout<< "hello" <<std::endl;
}
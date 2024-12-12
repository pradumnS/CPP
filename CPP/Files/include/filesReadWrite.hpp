

#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>

class files 
{
    public:
        void readFiles();
        void writeFiles();
        static void initializerFiles();
    private:
        const std::string path = "/home/LiveToCode/CPP/Files/sample.txt";
        std::unordered_map<std::string, int>countFreq;
};
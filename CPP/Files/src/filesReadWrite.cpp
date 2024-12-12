#include "filesReadWrite.hpp"

void files::readFiles()
{
    std::ifstream file(path);
    if(file.is_open())
    {
        //std::cout<< " readFiles success "<< std::endl;
    }
    std::string line;
    while(getline(file, line))
    {
        std::cout<< line << std::endl;
        std::stringstream ss(line);
        std::string words;
        while(ss >> words)
        {
            countFreq[words]++;
            std::cout<< " : " << countFreq[words] << std::endl;

        }
    }
    

}
void files::writeFiles()
{
    
}
void files::initializerFiles()
{
    //std::cout<< " initializerFiles "<< std::endl;
    files fl;
    fl.readFiles();
}
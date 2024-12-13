#include<iostream>
#include<thread>
#include<queue>
#include<mutex>
#include <condition_variable>

class consumerProducer 
{
    public:
        // consumerProducer() = default;  removed as default bcz I need to assign maxSize thats required implementation
        // in default construtor no need to implement if I will keep default which will be confustion

        consumerProducer(const int &sz, bool signal);
        ~consumerProducer() = default;
        consumerProducer(const consumerProducer& cpObj) = default;
        consumerProducer& operator = (const consumerProducer& mvObj) = default;
        consumerProducer(consumerProducer && cpObj) = delete;
        consumerProducer& operator = ( consumerProducer && mvObj) = delete;


        void counsumer();
        void producer();

        void counsumeInSequence();
        void producerInSequence();

        static void Initialiser();
    private:
        std::mutex mtx;
        std::condition_variable cv;
        std::queue<int>qData;
        const int maxSize;
        bool consumeSignal;
};
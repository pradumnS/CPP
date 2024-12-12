

#include <iostream>
/* own vector implementation
 step-1 create array could grow and go down in size.
        allowed insertion deleteion 
 */
template <class T>
class Myvector 
{
    public:
        Myvector();
        // Myvector();
        ~Myvector();
        Myvector(size_t &buf, T& val);

        void push_back(const T &val);
        void pop_back();

        void resize(T&);
        void display();

        T getSize();
        T getCapcity();

        T& operator[](T &index);



        static void initVector();
    private:
        T *buffer;
        size_t capacity;
        size_t size;
};
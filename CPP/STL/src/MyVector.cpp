#include "MyVector.hpp"

template <class T>
Myvector<T>::Myvector() : buffer(nullptr), size(0), capacity(0)
{

}
template <class T>
Myvector<T>::~Myvector()
{
    delete[] buffer;
}
template <class T>
Myvector<T>::Myvector(size_t &newCapacity, T& val) : size(newCapacity)
{
    buffer = new T[newCapacity+1];
}
template <class T>
void Myvector<T>::push_back(const T &val)
{
    if(capacity == size)
    {
        T val = capacity == 0 ? 1: 2*capacity;
        resize(val);
    }
    buffer[size] = val;
    size++;
}

template <class T>
void Myvector<T>::pop_back()
{
    
    if(size == 0)
    {
        // no data to empty
    }
    else 
    {
        T v = buffer[size];
        size--;
    }
     
}

template <class T>
T Myvector<T>::getSize()
{
    std::cout<< " size : "<< size << std::endl;
    return size;
}

template <class T>
T Myvector<T>::getCapcity()
{
    std::cout<< " size : "<< capacity << std::endl;
    return capacity;
}

template <class T>
T& Myvector<T>::operator[](T &index)
{
    if(index > size)
    {
        throw std::out_of_range("Index out of range");
    }
       
    // error
     return buffer[index];
}

template <class T>
void Myvector<T>::resize(T& cap)
{
    T *newBuf = new T[cap*2];
    for (size_t i = 0; i < size; i++)
    {
        newBuf[i] = buffer[i];
    }
    delete[] buffer;
    buffer = newBuf;
    capacity = cap*2;
}
template <class T>
void Myvector<T>::initVector()
{
    Myvector<int>mv;
    mv.push_back(10);
}
template class Myvector<int>;
/* 
Myvector();
~Myvector();
Myvector(size_t &buf, T& val);
 */
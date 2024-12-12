#include "String.hpp"


String::String() : val(nullptr), sz(0)
{

}
String::~String()
{
    /*         char* val;
        size_t sz; */
    delete [] val;
}
int String::getSize(const char* data)
{
    // std::cout<< " getsize : "<< *data << std::endl;
    //std::cout<< " size : "<< *data << std::endl;
    while(*data)
    {
        *data++;
        ++sz;
    }
    return sz;
}
String::String(const char* data)
{
    int siz = getSize(data);
    //std::cout<< " size : "<< siz << std::endl;
    val = new char[siz+1];
    for (size_t i = 0; i < siz; i++)
    {
       val[i] = data[i];
    }
    val[siz] = '\0';
    
}
String::String(const String &s)
{
    int siz = getSize(s.val);
    val = new char[siz+1];
    for (size_t i = 0; i < siz; i++)
    {
       val[i] = s.val[i];
    }
    val[siz] = '\0';
    std::cout<< " val : "<< val << std::endl;
    std::cout<< " val1 : "<< s.val << std::endl;

}

String& String::operator = (const String &s)
{
    if(this == &s)
        return *this;
    delete[] val;

    val = new char[s.sz+1];
    for (size_t i = 0; i < s.sz; i++)
    {
       val[i] = s.val[i];
    }
    std::cout<< " aval : "<< val << std::endl;
    std::cout<< " aval1 : "<< s.val << std::endl;
    return *this;
}
//String& String::operator +(const String &s){ return *this;}
String::String(String &&s)
{
    val = s.val;
    sz = s.sz;

    s.sz = 0;
    s.val = nullptr;

    std::cout<< " mmmval : "<< val << std::endl;
    std::cout<< " mmmval1 : "<< s.val << std::endl;
}

String& String::operator =(String &&s)
{
    if(this == &s)
        return *this;
    delete[] val;

    val = s.val;
    sz = s.sz;

    s.sz = 0;
    s.val = nullptr;

    std::cout<< " mval : "<< val << std::endl;
    std::cout<< " mval1 : "<< s.val << std::endl;

    return *this;
}
String String::operator +(const String &s)
{
    size_t newSize = sz + s.sz;
    char *newVal = new char[newSize+2];
    //  std::cout<< " val : "<< val<< ": " << s.val << std::endl;
    for (size_t i = 0; i < sz; i++)
    {
        newVal[i] = val[i];
        // std::cout<< " s8 : "<< newVal;
    }
    newVal[sz] = ' ';
    for (size_t i = 0; i < s.sz; i++)
    {
        newVal[sz+i+1] = s.val[i];
        // std::cout<< " s9 : "<< newVal << std::endl;
    }
        newVal[newSize+1] = '\0';
    // std::cout<< " s8 : "<< newVal << std::endl;
    return String(newVal);
}
void String::initstr()
{
    String s1;
    String s2("hello");
    String s3 = s2;
    s1 = s3;

    String s7("world");
    String s8 = s2 + s7;
    std::cout<< " s8 : "<< s8.val << std::endl;


    String s4("JiHello");
    String s5 = std::move(s4);
    String s6;
    s6 = std::move(s5);
    
}
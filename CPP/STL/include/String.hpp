
#include <iostream>

class String
{
    public:
        String();
        ~String();
        String(const char* val);
        String(const String&);
        String &operator =(const String &);
        String(String &&);
        String & operator =(String &&);

        int getSize(const char *data);

        String operator +(const String &);
        static void initstr();
        
    private:
        char* val;
        size_t sz;
};

#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

// No-args Constructor
Mystring::Mystring()
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}
{
    if(s==nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        // The +1 is for the terminator.
        str = new char[strlen(s)+1];
        // Deep Copy
        strcpy(str,s);
    }
}

// Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    str = new char[strlen(source.str)+1];
    // Deep Copy
    strcpy(str,source.str);
}


// Destructor
Mystring::~Mystring()
{
    delete [] str;
}

// Display Method
void Mystring::display() const
{
    cout<<str<<" : "<<get_length()<<endl;
}

// Length getter
int Mystring::get_length() const {return strlen(str);}

// String getter
const char *Mystring::get_str() const {return str;}
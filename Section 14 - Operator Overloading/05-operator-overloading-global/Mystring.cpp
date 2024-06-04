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

// Move Constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str)
{
    source.str = nullptr;
    cout<<"Move constructor used."<<endl;
}

// Destructor
Mystring::~Mystring()
{
    delete [] str;
}

// Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout<<"Copy Assignment."<<endl;
    if(this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str,rhs.str);
    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout<<"Move Assignment."<<endl;
     if(this == &rhs)
        return *this;
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Member - Equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return(strcmp(str,rhs.str)==0);
}

// Member - Make Lowercase
Mystring Mystring::operator-() const
{
    char *buff = new char[strlen(str)+1];
    strcpy(buff,str);

    for(size_t i=0;i<strlen(buff);i++)
        buff[i] = tolower(buff[i]);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
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

// Global - Equality
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return(strcmp(lhs.str, rhs.str)==0);
}

// Global - Lowercase
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[strlen(obj.str)+1];
    strcpy(buff,obj.str);
    for(size_t i=0; i<strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// Global - Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[strlen(lhs.str)+strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

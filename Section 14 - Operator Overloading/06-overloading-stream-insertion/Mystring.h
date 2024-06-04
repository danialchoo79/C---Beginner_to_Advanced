#ifndef _MYSTRING_H
#define _MYSTRING_H_

#include <iostream>

class Mystring
{
        // Global
        friend bool operator ==(const Mystring &lhs, const Mystring &rhs);
        friend Mystring operator-(const Mystring &obj);
        friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

        friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
        friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    private:
        char *str; // pointer to a char[] that holds a C-style string
    public:
        Mystring();                             // no-args constructor
        Mystring(const char *s);                // overloaded constructor
        Mystring(const Mystring &source);       // copy constructor
        Mystring(Mystring &&source);            // move constructor
        ~Mystring();                            // destructor

        Mystring &operator=(const Mystring &rhs); // Copy Assignment , LHS is pointer
        Mystring &operator=(Mystring &&rhs);      // Move Assignment 

        Mystring operator-() const;               // Make lowercase
        Mystring operator+(const Mystring &rhs) const; // Concatenate 
        bool operator==(const Mystring &rhs) const; 

        void display() const;
        int get_length() const;                 // getters
        const char *get_str() const;
};

#endif // _MYSTRING_H
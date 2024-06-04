/*
==========================================================
Description: Basics of Operator Overloading (Copy).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes (Syntax):

    Type &Type::operator(const Type &rhs);

    Mystring &Mystring::operator = (const Mystring &rhs);
    s2 = s1;                                                    // What we write
    s2.operator=(s1);                                           // What happens behind the scenes
*/

/*
    Notes (Overloading the Copy Assignment Operator - Deep Copy)

    Mystring &Mystring::operator=(const Mystring &rhs)
    {
        if(this == &rhs)
            return *this;
        
        delete [] str;
        str = new char[strlen(rhs.str)+1];
        strcpy(str,rhs.str);

        return *this;
    }
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading_copy main.cpp Mystring.cpp

    To Run:
    ./operator_overloading_copy.exe
*/

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};        // Overloaded Constructor
    Mystring b;                 // No-Args Constructor
    b = a;                      // Copy Assignment
                                // b.operator = a
    b = "This is a test.";       // b.operator = ("This is a test.")

    return 0;
}

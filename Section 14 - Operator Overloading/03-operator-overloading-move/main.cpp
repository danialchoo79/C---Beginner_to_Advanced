/*
==========================================================
Description: Basics of Operator Overloading (Move).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes (Syntax):

    Type &Type::operator=(Type &&rhs);

    Type &Type::operator=(Type &&rhs)
    {
        if (this == &rhs)
            return *this;
        
        delete [] str; // deallocates storage for this->str
        str = rhs.str; // copy of pointer variable

        rhs.str = nullptr;

        return *this;
    }
*/

/*
    Notes (Procedure)
    1. Deallocate storage
    2. Make pointer point to the correct object.
    3. Make the other pointer null.
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading_move main.cpp Mystring.cpp

    To Run:
    ./operator_overloading_move.exe
*/

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};        // Overloaded Constructor
    a = Mystring{"Hola"};       // Overloaded Constructor then move assignment
    a = "Bonjour";              // Overloaded Constructor then move assignment
 
    return 0;
}

/*
==========================================================
Description: Basics of Operator Overloading.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Not done automatically. (Except for assignment operator)
    2. Using Overloaded Operators (Example)
        Number result = (a+b)*(c/d);
    3. Operators that cannot be Overloaded:
        ::, :?, .*, ., sizeof
    4. Precendence and Associativity cannot be changed.
    5. Can't overload primitive types
        int, double, etc.
    6. Can't create new operators.
    7. These must be declared as member methods
        [], (), ->, =
    8. Other methods can be declared as member methods / global functions.
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading main.cpp Mystring.cpp

    To Run:
    ./operator_overloading
*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty; // no-args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge {larry}; // copy constructor

    empty.display();
    larry.display();
    stooge.display();

    return 0; 
}

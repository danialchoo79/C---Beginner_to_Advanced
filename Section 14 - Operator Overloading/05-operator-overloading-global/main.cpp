/*
==========================================================
Description: Basics of Operator Overloading (Global).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Operators)
    1. Unary Operators as global functions. (++, --, -, !)
    2. Binary Operators as global functions. (+, -, ==, !=, <, >, etc.)
*/

/*
    Note (Syntax)
   
   ReturnType operatorOp(const Type &lhs, const Type &rhs);
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading_global main.cpp Mystring.cpp

    To Run:
    ./operator_overloading_global.exe
*/

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring larry{"Larry"};
    larry.display();

    larry = -larry;
    larry.display();

    cout<<boolalpha<<endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;

    cout<<(larry == moe)<<endl;
    cout<<(larry == stooge)<<endl;

    Mystring stooges = "Larry" + moe;
    stooges.display();

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
  
    return 0;
}
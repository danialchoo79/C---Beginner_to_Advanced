/*
==========================================================
Description: Basics of Operator Overloading (Members).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note
    1. Unary Operators as member methods. (++, --, -, !)
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading_members main.cpp Mystring.cpp

    To Run:
    ./operator_overloading_members.exe
*/

#include <iostream>
#include <string>
#include "Mystring.h"

using namespace std;

int main()
{
    cout<<boolalpha<<endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout<<(larry == moe)<<endl;
    cout<<(larry == stooge)<<endl;

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();

    Mystring stooges = larry + "Moe";

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}

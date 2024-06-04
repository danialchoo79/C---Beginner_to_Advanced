/*
==========================================================
Description: Basics of Operator Overloading (Stream).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:

    To Compile:
    g++ -o operator_overloading_insertion main.cpp Mystring.cpp

    To Run:
    ./operator_overloading_insertion.exe
*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;

    cout<<"Enter the third stooge's first name: ";
    
    cin>>curly;

    cout<<"The three stooges are "<<larry<<", "<<moe<<", and "<<curly<<endl;

    cout<<"\nEnter the three stooges names separated by a space: ";
    cin>>larry>>moe>>curly;

    cout<<"The three stooges are "<<larry<<", "<<moe<<", and " <<curly<<endl;   
    return 0;
}
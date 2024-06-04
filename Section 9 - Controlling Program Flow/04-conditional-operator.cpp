/*
==========================================================
Description:Basic usage of ternary operators.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int num {};

    cout<<"Enter an integer: ";
    cin>>num;

    // normal if - else
    if(num % 2==0)
        cout<<num<<" is even"<<endl;
    else
        cout<<num<<" is odd"<<endl;

    // using ternary operator
    cout<<endl<<"using ternary operator"<<endl;
    cout<<num<<" is "<<((num%2==0)?"even":"odd")<<endl;

    cout<<endl;
    return 0;
}

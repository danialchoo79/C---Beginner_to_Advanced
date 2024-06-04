/*
==========================================================
Description:Basic usage of arithmetics.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 {200};
    int num2 {100};

    cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;

    int result {0};
    result = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<result<<endl;

    cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;

    cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;

    cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;

    cout<<num1<<" % "<<num2<<" = "<<num1 % num2<<endl;

    return 0;
}
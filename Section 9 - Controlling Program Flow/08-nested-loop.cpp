/*
==========================================================
Description:Basic usage of do nested loops (Multiplication Table).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    for(int num1 {1}; num1<=10; num1++)
    {
        for(int num2 {1}; num2<=10; num2++)
        {
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        }
        cout<<"--------------"<<endl;
    }
    cout<<endl;
    return 0;
}

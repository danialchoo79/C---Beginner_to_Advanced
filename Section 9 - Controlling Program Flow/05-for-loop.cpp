/*
==========================================================
Description:Basic usage of for loops.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i{1}; i<=10; i++)
        cout<<i<<endl;

    cout<<endl;
    
    for (int i{1}; i<=10; i+=2)
        cout<<i<<endl;

    cout<<endl;

    cout<<"Using two counters"<<endl;
    for (int i{1}, j{5}; i<=5; i++, j++)
        cout<<i<<" + "<<j<<" = "<<(i+j)<<endl;

    return 0;
}

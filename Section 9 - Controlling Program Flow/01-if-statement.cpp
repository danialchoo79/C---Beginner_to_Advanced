/*
==========================================================
Description:Basic usage of if statements.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int min {10};
    const int max {100};

    cout<<"Enter a number between "<<min<<" and "<<max<<": ";
    cin>>num;
    cout<<endl;

    if(num >= min)
    {
        cout<<num<<" is greater than "<<min<<endl;

        int diff {num - min};
        cout<<num<<" is "<<diff<<" greater than "<<min<<endl;

        cout<<endl;
    }

    if(num <= max)
    {
        cout<<num<<" is less than or equal to "<<max<<endl;

        int diff {max - num};
        cout<<num<<" is "<<diff<<" lesser than "<<max<<endl;

        cout<<endl;
    }
   
    return 0;
}

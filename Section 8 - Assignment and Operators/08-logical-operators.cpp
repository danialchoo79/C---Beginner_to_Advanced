/*
==========================================================
Description: Basic usage of logical operators.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:
Precedence: NOT > AND > OR 
*/


#include <iostream>

using namespace std;

int main()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout<<boolalpha;

    cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<":";
    cin>>num;

    bool within_bounds{false};
    within_bounds= (num > lower && num < upper);
    cout<<num<<" is between "<<lower<<" and "<<upper<<": "<<within_bounds<<endl;

    

   
    cout<<endl;
    return 0;
}
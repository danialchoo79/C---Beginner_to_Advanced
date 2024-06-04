/*
==========================================================
Description: Basic usage of increment and decrement operators.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:

Prefix ++num
Postfix num++
*/

#include <iostream>

using namespace std;

int main()
{
    int counter {10};
    int result {0};

    cout<<"Counter: "<<counter<<endl;

    counter = counter + 1;
    cout<<"Counter: "<<counter<<endl;

    counter++;
    cout<<"Counter: "<<counter<<endl;

    ++counter;
    cout<<"Counter: "<<counter<<endl;

    cout<<endl;

    // Pre-increment
    counter = 10;
    result = 0;

    cout<<"Pre-increment."<<endl;
    cout<<"Counter: "<<counter<<endl;

    result = ++counter; // pre-increment, counter + 1 then assign to result
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    cout<<endl;

    // Pre-increment
    counter = 10;
    result = 0;

    cout<<"Post-increment."<<endl;
    cout<<"Counter: "<<counter<<endl;

    result = counter++; // post-increment, result = counter then counter + 1
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    cout<<endl;
    return 0;
}
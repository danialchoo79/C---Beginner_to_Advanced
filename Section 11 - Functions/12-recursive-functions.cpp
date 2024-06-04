/*
==========================================================
Description:Basic understanding of Recursive Functions.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Notes:
- Needs
    1. Base Case
    2. Recursion
- Precaution
    1. It uses the stack exhaustively.
    2. To be used with precaution for
       resource constrained applications.
*/

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if (n<=1)
        return n; // base case
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

int main()
{
    cout<<fibonacci(5)<<endl;
    cout<<fibonacci(30)<<endl;
    cout<<fibonacci(40)<<endl;
    return 0;
}


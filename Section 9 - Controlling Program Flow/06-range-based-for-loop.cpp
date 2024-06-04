/*
==========================================================
Description:Basic usage of range based for loops.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int scores[] {10,20,30};

    for (int score:scores)
        cout<<score<<endl;

    cout<<endl;

    for (auto score:scores)
        cout<<score<<endl;
    
    cout<<endl;
    return 0;
}

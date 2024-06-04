/*
==========================================================
Description:Basic usage of references.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Reference is an alias to a variable.
    2. Syntax is &variable.
    3. Use const for displaying.
    4. References are used for l-values.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num {100};
    int &ref {num}; // ref is an alias to num

    cout<<num<<endl;
    cout<<ref<<endl;

    num = 200;
    cout<<"-------------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    num = 300;
    cout<<"-------------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    // Range based for loops using referencing
    cout<<"\n------------------------"<<endl;
    vector<string> stooges {"Larry","Moe","Curly"};

    for(auto str:stooges)
        str = "Funny";
    
    // Without referencing - No change
    for(auto str:stooges)
        cout<<str<<endl;
    
    // With Referencing - Change
    for(auto &str:stooges)
        str = "Funny";
    
    // Change
    for(auto const &str:stooges)
        cout<<str<<endl;

    return 0;
}

/*
==========================================================
Description:Basic usage of function parameters.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:
    Main idea - Call by Value creates local copies of variable.
    Anything in the main will not be affected.
*/

#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

// Function Prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear(); // delete all vector elements
}

void print_vector(vector<string> v)
{
    for(auto s:v)
        cout<<s<<" ";
    cout<<endl;
}

int main()
{
    int num {10};
    int another_num {20};

    // Call by value create copies - in this main, num remains the same
    cout<<"num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1: "<<num<<endl;

    // Likewise, another_num remains the same here.
    cout<<"\nanother num before calling pass_byu_value1: "<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"another num before calling pass_byu_value1: "<<another_num<<endl;

    // Even with objects, call by value still create copies, name remains the same.
    string name {"Frank"};
    cout<<"\nname before calling pass_by_value2: "<<name<<endl;
    pass_by_value2(name);
    cout<<"name after calling pass_by_value2: "<<name<<endl;

    // Even with vectors, the function call creates a local copy, stooges, remains the same.
    vector<string> stooges {"Larry","Moe","Curly"};
    cout<<"\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout<<"stooges after calling pass_by_value3: ";
    print_vector(stooges);

    cout<<endl;

    return 0;
}


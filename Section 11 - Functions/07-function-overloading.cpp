/*
==========================================================
Description:Basic usage of function overloading.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:
Be careful of using overloaded functions with default arguments.
Problems with ambiguity, as compiler chooses which to call.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function overloading
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout<<"Printing int: "<<num<<endl;
}

void print(double num)
{
    cout<<"Printing double: "<<num<<endl;
}

void print(string s)
{
    cout<<"Printing string: "<<s<<endl;
}

void print(string s, string t)
{
    cout<<"Printing 2 strings: "<<s<<" and "<<t<<endl;
}

void print(vector<string> v)
{
    cout<<"Printing Vector of Strings: ";
    for(auto s:v)
        cout<<s + " ";
    cout<<endl;
}


int main()
{
    print(100);
    print('A'); /// promoted to integer, no fxn uses char
    print(123.5);
    print(123.3F); // promoted to double, no fxn uses float

    print("C-style String"); // C style string is converted to C++ string

    string s {"C++ String"};
    print(s);

    print("C-style String",s);

    vector<string> three_stooges {"Larry","Moe","Curly"};
    print(three_stooges);
   
    cout<<endl;

    return 0;
}


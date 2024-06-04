/*
==========================================================
Description:Basic usage of pointers (Dereferencing).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:
    1. Dereference using *.
    2. Type of variable must be the same for the pointer variable
       and the variable it is pointing to.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Pointers (Integer)
    int score{100};
    int *score_ptr {&score};

    // Dereferencing
    cout<<*score_ptr<<endl;

    // Storing new data in pointer 
    *score_ptr = 200;

    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    cout<<"-------------------------------"<<endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    cout<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;

    // Pointers (String)
    cout<<"-------------------------------"<<endl;

    string name {"Frank"};
    string *string_ptr {&name};

    cout<<*string_ptr<<endl;
    name = "James";
    cout<<*string_ptr<<endl;

    // Pointers (Vector)
    cout<<"-------------------------------"<<endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout<<"First stooge: "<<(*vector_ptr).at(0)<<endl;

    cout<<"Stooges: ";
    for(auto stooge:*vector_ptr)
        cout<<stooge<<" ";
    cout<<endl;

    return 0;
}

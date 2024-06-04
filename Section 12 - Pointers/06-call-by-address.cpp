/*
==========================================================
Description:Basic usage of Call by Address.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function Prototypes
void double_data(int *int_ptr);
void swap(int *a, int *b);
void display(vector<string> *v);

// Function overloading
void display(int *array, int sentinel);

// Function definitions
void double_data(int *int_ptr)
{
    *int_ptr *=2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(vector<string> *v)
{
    for(auto str:*v)
        cout<<str<<" ";
    cout<<endl;
}

void display(int *array, int sentinel)
{
    while(*array !=sentinel)
        cout<<*array++<<" "; // Right to Left Associativity
    cout<<endl;
}

int main()
{
   int value{10};
   int *int_ptr {nullptr};
   int x{100}, y{200};

   // Update values
   cout<<"Value: "<<value<<endl;
   double_data(&value);
   cout<<"Value: "<<value<<endl;

   cout<<"-------------------------"<<endl;
   int_ptr = &value;
   double_data(int_ptr);
   cout<<"Value: "<<value<<endl;

    // Swap
    cout<<"\nx: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    swap(&x,&y);

    cout<<"\nx: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    // Vectors using pointers
    cout<<"--------------------------"<<endl;
    vector <string> stooges {"Larry","Moe","Curly"};
    display(&stooges);

    // Vectors using pointers + Function Overloading
    cout<<"\n--------------------------"<<endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores,-1);

    cout<<endl;
    return 0;
}

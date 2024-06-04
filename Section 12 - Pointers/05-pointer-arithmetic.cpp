/*
==========================================================
Description:Basic usage of pointer arithmetic.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes (Pointer Arithmetic):

    1. Used with raw arrays.

    2. Increment - points to next array element 
                   int_ptr++; 

    3. Decrement - points to previous array element 
                   int_ptr--;

    4. Addition - increments pointer by n*sizeof(type)
                  int_ptr +=n;

    5. Subtraction - decrement pointer by n*sizeof(type)
                  int_ptr -= int_ptr;

    6. Subtracting 2 pointers - determine number of elements
                                between the pointers
                  int n = int_ptr2 - int_ptr1;
            
    7. Comparison - Compares address of pointer variables
                  p1 == p2;      where p1, p2 are pointers
    
    8. Comparison - Compares values of pointer variables
                  p1* == p2*;      where p1, p2 are pointers
*/

/*
    Notes (const qualifier with pointers):

    1. Prevents changing value of variables for that pointer
       but can be pointer to another variable if needed.

       const int *ptr {&value};     where value is int value {};

    2. Data pointed by pointers can be changed but pointer itself
       cannot change and point elsewhere.

       int *const ptr {&value};     where value is int value {};

    3. Both data point by pointer and pointer itself cannot be changed.

       const int *const ptr {&value};    where value is int value {};
*/

#include <iostream>

using namespace std;

int main()
{
    int scores[] {100,95,89,68,-1};
    int *score_ptr {scores};

    while(*score_ptr != -1)
    {
        cout<<*score_ptr<<endl;
        score_ptr++;
    }

    cout<<"\n---------------------"<<endl;
    score_ptr = scores;
    while(*score_ptr !=-1)
        cout<<*score_ptr++<<endl; // NOTE: Associativity is from right to left. \
                                           This increments the pointer first then dereference it.

    cout<<"\n---------------------"<<endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout<<boolalpha;
    cout<<p1<<" == "<<p2<<" : "<<(p1==p2)<<endl;
    cout<<p1<<" == "<<p3<<" : "<<(p1==p3)<<endl;

    cout<<*p1<<" == "<<*p2<<" : "<<(*p1==*p2)<<endl;
    cout<<*p1<<" == "<<*p3<<" : "<<(*p1==*p3)<<endl;

    p3 = &s3;
    cout<<*p1<<" == "<<*p3<<" : "<<(*p1==*p3)<<endl;

    cout<<"\n-----------------------"<<endl;
    char name[] {"Frank"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout<<"In the string "<<name<<", "<<*char_ptr2<<" is "<<(char_ptr2 - char_ptr1)<<" characters away from "<<*char_ptr1<<endl;

    cout<<endl;
    return 0;
}





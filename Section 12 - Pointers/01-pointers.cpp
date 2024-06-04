/*
==========================================================
Description:Basic usage of pointers.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Pointer Basics):
    1. Pointer is a variable that holds an address. 
    2. Initialising pointers as nullptr means initialising it to 0.
    3. Uninitialised pointers contains garbage data. NOTE, data not address.
    4. Access pointer address using ampersand &.
*/

/*
    Note (Pointer Pitfalls):
    1. Uninitialized pointers. Points anywhere and contains garbage.
    2. Dangling pointers. Pointing to invalid memory.
    3. Not checking if new failed.
    4. Memory leaks.
*/

/*
    Note (L and R Values):
    1. l-values have names and are addressable, modifiable if not const
    2. r-values are usually at RHS of assignmment expression, a literal, 
       a temporary (non-modifiable)
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num{10};

    cout<<"Value of num is: "<<num<<endl;
    cout<<"Size of num is: "<<sizeof(num)<<endl;
    cout<<"Address of num is: "<<&num<<endl;

    cout<<endl;

    // Using Pointers
    int *p;
    cout<<"Value of p is: "<<p<<endl; // Garbage Data
    cout<<"Address of p is: "<<&p<<endl;
    cout<<"Size of p is: "<<sizeof(p)<<endl;

    p = nullptr;
    cout<<"\nValue of p is: "<<p<<endl;

    cout<<endl;

    // More pointers
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3(nullptr);
    vector<string> *p4{nullptr};
    string *p5 {nullptr};

    cout<<"\nsizeof p1 is: "<<sizeof(p1)<<endl;
    cout<<"sizeof p2 is: "<<sizeof(p2)<<endl;
    cout<<"sizeof p3 is: "<<sizeof(p3)<<endl;
    cout<<"sizeof p4 is: "<<sizeof(p4)<<endl;
    cout<<"sizeof p5 is: "<<sizeof(p5)<<endl;

    cout<<endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr {nullptr};

    score_ptr = &score;
    cout<<"Value of score is: "<<score<<endl;
    cout<<"Address of score is: "<<&score<<endl;
    cout<<"Value of score_ptr is: "<<score_ptr<<endl;

   
    return 0;
}

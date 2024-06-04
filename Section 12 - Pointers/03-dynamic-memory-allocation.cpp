/*
==========================================================
Description:Basic usage dynamic memory allocation using Heap.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Can dynamically allocate memory on the heap.
    2. Free what was allocated to prevent memory leak.
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int *int_ptr {nullptr};

    int_ptr = new int; // stores int in heap, \
                          var. pointing to that int
    cout<<int_ptr<<endl;

    delete int_ptr; // frees memory in heap

    // Contiguous memory in the heap
    size_t size{0};
    double *temp_ptr {nullptr}; 

    cout<<"How many temps? ";
    cin>>size;

    temp_ptr =  new double[size]; 

    cout<<temp_ptr<<endl; // address of first variable of contiguous \
                             block of memory
    
    delete []temp_ptr;


    
    cout<<endl;
    return 0;
}

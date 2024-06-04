/*
==========================================================
Description:Basic usage of returning with pointers.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Returning a parameter.
    2. Returning dynamically allocated memory.
       Delete memory that is used on the heap.
    3. Never return a pointer to a local variable.
*/

#include <iostream>

using namespace std;


// Function Prototypes
int *create_array(size_t size, int init_value = 0);
void display(const int* const array, size_t size);

// Function Definitions
int *create_array(size_t size, int init_value)
{
    // Create memory block in heap
    int *new_storage {nullptr};
    new_storage = new int[size];

    // Initialise each element in memory block
    for(size_t i{0}; i<size; i++)
        *(new_storage + i) = init_value;
    
    return new_storage;
}

void display(const int* const array, size_t size)
{
    for(size_t i{0};i<size;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

int main()
{
    int *my_array {nullptr};
    size_t size;
    int init_value{};

    cout<<"\nHow many integers would you like to allocate: ";
    cin>>size;
    cout<<"What value would you like them initialized to? ";
    cin>>init_value;

    my_array = create_array(size, init_value);
    cout<<"\n----------------------"<<endl;

    display(my_array,size);

    delete [] my_array;
    
    return 0;
}

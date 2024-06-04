/*
==========================================================
Description:Basic usage of passing functions as arrays.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:
- Array elements are not copied for pass by value.
- Address is copied, the function can modify the array. const prevents modification.
- Array name evaluates to location of array in memory.
- During function call, fxn will not know how many elements are in the array.
- Hence, pass in the size.
*/

#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size)
{
    for(size_t i{0}; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void set_array(int arr[], size_t size, int value)
{
    for(size_t i{0}; i<size; i++)
        arr[i] = value;
}

int main()
{
    int my_scores[] {100,98,90,86,84};

    print_array(my_scores,5);
    set_array(my_scores,5,100);
    print_array(my_scores,5);

    cout<<endl;

    return 0;
}


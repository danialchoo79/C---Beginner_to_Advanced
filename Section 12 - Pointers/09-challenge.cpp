/*
==========================================================
Description: 2 arrays - multiply and print, using pointers.

Compiler: gcc

Author: Danial Choo
==========================================================
*/


#include <iostream>

using namespace std;

// Function Prototypes
void print(int[],size_t);
int* apply_all(int[],size_t,int[],size_t);

// Function Definitions
void print(int arr[],size_t arr_size)
{
    for(int i{0};i<arr_size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int* apply_all(int arr1[],size_t arr1_size,int arr2[],size_t arr2_size)
{
    int *arr3 {nullptr};

    int k{0};

    arr3 = new int[arr1_size * arr2_size];

    for(int i{0}; i<arr2_size; i++)
    {
        for(int j{0}; j<arr1_size; j++)
        {
            arr3[k++] = arr1[j]*arr2[i];
        }
    }

    return arr3;
}

int main()
{
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout<<"Array 1: ";
    print(array1,array1_size);

    cout<<"Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout<<"Result: ";
    print(results, results_size);

    delete results; // Free the memory

    cout<<endl;

    return 0;
}

/*
==========================================================
Description:Basic usage of pointers for arrays.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    For Arrays:
    1. The var. is the address of the first
       element in the array. When dereferenced, it will give
       the value of the first element of array.
    2. A pointer pointing to the array will have similar behaviour.
       Will need a loop to get the elements of an array.

    int array_name[] {1,2,3,4,5};
    int *pointer_name {array_name};

    array_name[index] is similar to *(array_name + index)
    pointer_name[index] is similar to *(pointer_name + index)

    3. Notations include Array Subscript, Pointer Subscript, Pointer Offset,
       Array Offset.
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int scores[] {100,95,89};

    cout<<"Value of scores: "<<scores<<endl; // address of first element of array

    int *score_ptr {scores};

    cout<<"Value of score_ptr: "<<score_ptr<<endl; // address of first element of array

    cout<<"\nArray subscript notation---------------------"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    cout<<"\nPointer subscript notation--------------------"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<"\nPointer offset notation........................"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    cout<<"\nArray offset notation..........................."<<endl;
    cout<<*scores<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;

    cout<<endl;
    return 0;
}





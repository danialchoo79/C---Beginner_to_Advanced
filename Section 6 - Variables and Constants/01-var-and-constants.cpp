/*
==========================================================
Description:Basic usage of variables to calculate area of room.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int length {0};
    int width {0};

    cout<<"Enter length of room ";
    cin>>length;
 
    cout<<"Enter width of room ";
    cin>>width;

    cout<<"The area of the room is "<<length*width<< endl;

    return 0;
}
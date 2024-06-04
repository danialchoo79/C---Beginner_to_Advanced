/*
==========================================================
Description:Basic usage of random numbers.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime> // required for time()
 
using namespace std;

int main()
{
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;

    // seeding the random number generator
    srand(time(nullptr));

    for(size_t i{1}; i<=count; i++)
    {
        random_number = rand() % max + min; // generate a random number between 1 to 6
        cout<<random_number<<endl;
    }

    cout<<endl;
    return 0;
}

/*
==========================================================
Description:Basic usage of arrays.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    char vowels[] {'a','e','i','o','u'};

    cout<<"The first vowel is "<<vowels[0]<<endl;
    cout<<"The last vowel is "<<vowels[4]<<endl;

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout<<"\nThe first high temperature "<<hi_temps[0]<<endl;
    hi_temps[0] = 100.7;
    cout<<"The first high temperature is now "<<hi_temps[0]<<endl;

    int test_scores [5];
    cout<<"\nFirst Score at index 0 is: "<<test_scores[0]<<endl;
    cout<<"Second Score at index 1 is: "<<test_scores[1]<<endl;
    cout<<"Third Score at index 2 is: "<<test_scores[2]<<endl;
    cout<<"Fourth Score at index 3 is: "<<test_scores[3]<<endl;
    cout<<"Fifth Score at index 4 is: "<<test_scores[4]<<endl;

    cout<<"\nEnter 5 test scores: \n";
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];

    cout<<"\nFirst Score at index 0 is: "<<test_scores[0]<<endl;
    cout<<"Second Score at index 1 is: "<<test_scores[1]<<endl;
    cout<<"Third Score at index 2 is: "<<test_scores[2]<<endl;
    cout<<"Fourth Score at index 3 is: "<<test_scores[3]<<endl;
    cout<<"Fifth Score at index 4 is: "<<test_scores[4]<<endl;



    return 0;
}
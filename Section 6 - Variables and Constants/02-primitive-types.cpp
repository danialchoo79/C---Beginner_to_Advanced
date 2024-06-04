/*
==========================================================
Description:Basic usage of primitive types.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    char middle_initial {'J'};
    int countries_represented {65};
    long people_in_florida {2061000};
    long long people_in_earth {7'600'000'000}; //will overflow with long
    float car_payment {401.23};
    double pi {3.141592};
    long double large_amount {2.7e120};
    bool gameover {false};

    cout<<"My middle initial is "<<middle_initial<<endl;
    cout<<"The number of countries represented are "<<countries_represented<<endl;
    cout<<"The number of people in florida are "<<people_in_florida<<endl;
    cout<<"the number of people in earth are "<<people_in_earth<<endl;
    cout<<"My car payment is $"<<car_payment<<endl;
    cout<<"Pi is approximately "<<pi<<endl;
    cout<<"This amount is a large amount "<<large_amount<<endl;
    cout<<"0 for game over else 1, my result is: "<<gameover<<endl;

    return 0;
}
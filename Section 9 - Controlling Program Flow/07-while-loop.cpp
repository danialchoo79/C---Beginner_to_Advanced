/*
==========================================================
Description:Basic usage of while loops.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int num{};
    cout<<"Enter a positive integer - start the countdown: ";
    cin>>num;

    while(num>0)
    {
        cout<<num<<endl;
        --num;
    }
    cout<<"Blastoff!"<<endl;

    // using a Boolean Flag
    bool done{false};
    int number{};

    cout<<endl;

    while(!done)
    {
        cout<<"Enter an integer that is between 1 and 5: ";
        cin>>number;

        if(number<=1 || number>=5)
            cout<<"Out of range, please try again."<<endl;
        else
        {
            cout<<"Thanks!"<<endl;
            done = true;
        }
    }


    cout<<endl;
    return 0;
}

/*
==========================================================
Description:Basic usage of do while loops.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>

using namespace std;

int main()
{
    char selection{};

    do
    {
        cout<<"\n----------------"<<endl;
        cout<<"1. Do this"<<endl;
        cout<<"2. Do that"<<endl;
        cout<<"3. Do something else"<<endl;
        cout<<"Q. Quit"<<endl;
        cout<<"Enter your selection: ";

        cin>>selection;

        cout<<"Selection Entered "<<selection<<endl;

        if(selection == '1')
            cout<<"You chose 1 - doing this"<<endl;
        else if(selection == '2')
            cout<<"You chose 2 - doing that"<<endl;
        else if(selection == '3')
            cout<<"You chose 3 - doing something else"<<endl;
        else if(selection == 'Q' || selection == 'q')
            cout<<"Goodbye..."<<endl;
        else
            cout<<"Unknown Selection. Try Again."<<endl;

    } while(selection != 'q' && selection != 'Q');
    
    cout<<endl;
    return 0;
}

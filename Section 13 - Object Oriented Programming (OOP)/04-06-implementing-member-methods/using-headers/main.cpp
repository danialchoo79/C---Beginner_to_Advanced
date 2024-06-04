/*
==========================================================
Description: main file to demonstrate headers w scope 
             resolution for classes.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:
    This program demonstrates usage header files + scope resolution.

    To compile you can run this from using-headers directory:
    g++ -o output_file_name main.cpp Account.cpp     
*/

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0))
        cout<<"Deposit OK."<<endl;
    else
        cout<<"Deposit not allowed."<<endl;

    if(frank_account.withdraw(500.0))
        cout<<"Withdrawal OK."<<endl;
    else
        cout<<"Not sufficient funds."<<endl;
    
    if(frank_account.withdraw(1500.0))
        cout<<"Withdraw OK."<<endl;
    else
        cout<<"Not sufficient funds."<<endl;

    return 0;
}
/*
==========================================================
Description: Derived Class can override or redefine Base
             Class Methods.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note: (Syntax - Example)

    class Amount
    {
        public:
            void deposit(double amount)
                {
                    balance += amount;
                }
    };

    class Savings_Account: public: Account
    {
        public:
            // Redefining Base Class Method.
            void deposit(double amount)
            {
                amount += some_interest;

                // Invoke Call for Base Class Method
                Account::deposit(amount);
            }
    }
*/

/*
    Note (Static Binding of Method Calls)
        1. Default Binding for C++ is Static.
        2. Derived class Object will use Derived:: Redefined Base Class Method.
        3. Can explicitly invoke Base::Base Class Method from Derived: Redefined Base Class Method.
        4. Dynamic Binding is much more powerful.
*/

/*

    To Compile:
    g++ -o 06-redefining-base-class-methods main.cpp Savings_Account.cpp Account.cpp

    To Run:
    ./06-redefining-base-class-methods.exe

*/

#include <iostream>
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout<<"\n=======Account Class==========="<<endl;
    Account a1 {1000.0};
    cout<<a1<<endl;

    a1.deposit(500.0);
    cout<<a1<<endl;

    a1.withdraw(1000.0);
    cout<<a1<<endl;

    a1.withdraw(5000.0);
    cout<<a1<<endl;

    cout<<"\n=======Savings Account Class==========="<<endl;
    Savings_Account s1{1000, 5.0};
    cout<<s1<<endl;

    s1.deposit(1000);
    cout<<s1<<endl;

    s1.withdraw(2000);
    cout<<s1<<endl;


    return 0;
}


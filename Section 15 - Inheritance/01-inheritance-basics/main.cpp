/*
==========================================================
Description: Basics of Inheritance.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes (General):
    1. Creates classes from existing classes.
    2. New classes contains data and behaviors of existing class.
    3. Reuse Mechanism

    -----------------------------------------------------------

    Note (Syntax - Example):
        class Base
        {
            // Base class members ...
        };

        class Derived : access-specifier Base
        {
            // Derived class members ....
        };

        // access specifier can be public ("is-a"), \
           private or protected ("has-a").
    
    ---------------------------------------------------------------

    Notes (Terminologies)
    1. Single Inheritance - A new class created from a single class.
    2. Multiple Inheritance - A new class created from two or more classes.
    3. Base Class - Parent Class, Super Class
    4. Derived Class - Child Class, Sub Class
    5. "Is-A" relationship - Public Inheritance
    6. Generalisation - Combining similar classes into a general class
    7. Specialisation - Creating new classes from existing classes
    8. Inheritance / Class Hierarchies - Organisation of inheritance r/s

    -------------------------------------------------------------------

    Notes (Public Inheritance vs Composition)
                                Person - Account
                                    ^
                                    |
                                    --------
                                    |      |
                                Employee   Student
    1. Public Inheritance
        - "is-a" relationship.
    2. Composition
        - "has-a" relationship.

    ---------------------------------------------------------------------

    Note (Composition Syntax - Example):
        class Person
        {
            private:
                string name; // has-a name
                Account account; // has-a account
        };
*/

/*
    Note:

    To Compile:
    g++ -o 01-inheritance-basics main.cpp Savings_Accounts.cpp Account.cpp

    To Run:
    ./01-inheritance-basics.exe
*/

#include <iostream>
#include "Account.h"
#include "Savings_Accounts.h"

using namespace std;

int main()
{
    // Use the Account Class
    cout<<"\n===========Account=============="<<endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout<<endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    // Use the Savings Accounts Class
    cout<<"\n===========Savings Accounts=============="<<endl;
    Savings_Accounts sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    cout<<endl;

    Savings_Accounts *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Accounts();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout<<"\n========================================"<<endl;

    return 0;
}
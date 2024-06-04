/*
==========================================================
Description: Basics of Constructors and Destructors.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Sequence):
    1. Base Initialised
    2. Derived Initialised
    3. Base Class Constructor Executes
    4. Derived Class Constructor Executes

    Note (Destructors):
    1. Destructors are invoked in reverse order as 
       constructors.

    Note (Example):
    1. Base base;          Base constructor - Base destructor
    2. Derived derived;    Base constructor - Derived constructor
                           - Derived destructor - Base destructor

    ---------------------------------------------------------------

    Note (Derived Class Inheritance)
    1. Does not inherit:
        a. Base class constructor.
        b. Base class destructor.
        c. Base class overloaded assignment operators.
        d. Base class friend functions.

    2. Able to invoke Base Class Versions:
        a. Derived class constructor.
        b. Derived class destructor.
        c. Overloaded assignment operator.
*/

#include <iostream>

using namespace std;

class Base
{
    private:
        int value;
    public:
        Base(): value{0} {cout<<"Base no-args constructor"<<endl;}
        Base(int x): value{x} {cout<<"Base (int) overloaded constructor"<<endl;}
        ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived: public Base
{
    private:
        int doubled_value;
    public:
        Derived(): doubled_value{0} {cout<<"Derived no-args constructor"<<endl;}
        Derived(int x): doubled_value{x*2} {cout<<"Derived (int) overloaded constructor"<<endl;}
        ~Derived() {cout<<"Derived destructor"<<endl;}
};

int main()
{
    // Base b;

    Derived d {1000};

    return 0;
}


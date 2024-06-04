/*
==========================================================
Description: Passing Argument to Base Class.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Syntax):

        class Base
        {
            public:
                Base();
                Base(int);
                . . .
        };

        Derived::Derived(int x);
            : Base{x}, {optional initializers for Derived}
        {//code}

    ---------------------------------------------------------

    Note (Constructor and Class Initialisation):

    Derived derived{100};    Output: int Base constructor, 
                                     int Derived constructor
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
        Derived(): Base{},doubled_value{0} {cout<<"Derived no-args constructor"<<endl;}
        Derived(int x): Base{x}, doubled_value{x*2} {cout<<"Derived (int) overloaded constructor"<<endl;}
        ~Derived() {cout<<"Derived destructor"<<endl;}
};

int main()
{
    // Base b;

    Derived d {1000};

    return 0;
}



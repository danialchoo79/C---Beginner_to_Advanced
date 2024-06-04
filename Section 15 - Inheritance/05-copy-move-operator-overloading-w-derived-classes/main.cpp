/*
==========================================================
Description: Copy/Move/Operator Overloading with Derived
             Classes.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note :
    1, Copy/Move Constructors and overloaded operator=
        a. Not inherited from the Base Class.
        b. May not need to provide your own. Compiler provides.
        c. Can explicitly invoke Base class versions from derived
           class.
    
    --------------------------------------------------------------
    
    Note (Copy Constructor Syntax w Classes):

    Derived::Derived(const Derived &other)
        :Base(other), {Derived initialisation list}
    {//code}

    --------------------------------------------------------------

    Note (operator= Syntax w Classes):

    class Base
    {
        int value;

        public:
            Base &operator=(const Base &rhs)
            {
                if(this!=&rhs)
                {
                    value = rhs.value;
                }
                return *this;
            }
    };

    class Derived : public Base
    {
        int doubled_value;

        public:
            Derived &operator=(const Derived &rhs)
            {
                if(this != &rhs)
                {
                    Base::operator=(rhs);
                    doubled_value = rhs.doubled_value;
                }
                return *this;
            }
    }
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
        Base(const Base &other): value{other.value} {cout<<"Base copy constructor"<<endl;}
        Base &operator=(const Base &rhs)
        {
            cout<<"Base operator="<<endl;
            if(this == &rhs)
                return *this;
            value = rhs.value;
            return *this;
        }
        ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived: public Base
{
    private:
        int doubled_value;
    public:
        Derived(): Base{},doubled_value{0} {cout<<"Derived no-args constructor"<<endl;}
        Derived(int x): Base{x}, doubled_value{x*2} {cout<<"Derived (int) overloaded constructor"<<endl;}
        Derived(const Derived &other): Base(other), doubled_value{other.doubled_value} {cout<<"Derived copy constructor"<<endl;}   // Slices non-Base (doubled_value)

        Derived &operator=(const Derived &rhs)
        {
            cout<<"Derived operator="<<endl;

            if(this == &rhs)
                return *this;
            Base::operator=(rhs);
            doubled_value = rhs.doubled_value;
            return *this;
        }

        ~Derived() {cout<<"Derived destructor"<<endl;}
};

int main()
{
    Base b{100}; // Overloaded Constructor
    Base b1{b}; // Copy Constructor
    b = b1;     // Copy Assignment

    Derived d {100}; // Overloaded Constructor
    Derived d1{d};   // Copy Constructor
    d = d1;          // Copy Assignment

    return 0;
}



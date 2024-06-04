/*
==========================================================
Description: Basics of protected members.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Syntax):
        class Base
        {
            protected:
                // protected Base Class Members
        };

        // Accessible from Base Class.
        // Accessible from Classes Derived from Base.
        // Not Accessible by Objects of Base or Derived.
    
    Note (Types of Inheritances):
    1. Public Inheritance 
        Base Class                          Derived Class
        - public                            - public
        - protected                         - protected
        - private                           - private
    2. Protected Inheritance
        Base Class                          Derived Class
        - public                            - protected
        - protected                         - protected
        - private                           - private
    3. Private Inheritance
        Base Class                          Derived Class
        - public                            - private
        - protected                         - private
        - private                           - private
*/

#include <iostream>

using namespace std;

class Base
{
    // Note: Friends of Base have access to all.
    public:
        int a{0};
        void display()
        {
            // Note: Member method have access to all.
            cout<<a<<", "<<b<<", "<<", "<<c<<endl;
        }
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base
{
    // Note: Friends of Base have access to all.

    // a will be public.
    // b will be protected.
    // c will not be accessible. (Private)

    public:
        void access_base_members()
        {
            a = 100; // OK
            b = 200; // OK
            // c = 300; // Not accessible
        }
};

int main()
{
    cout<<"===Base member access from base objects==="<<endl;
    Base base;
    base.a = 100; // OK
    // base.b = 200; // Compiler Error - No Inheritance for Protected
    // base.c = 300; // Compiler Error - Private

    cout<<"===Base member access from derived objects==="<<endl;

    Derived derived;
    derived.a = 100;
    // derived.b = 200; // Compiler Error - No Inheritance for Protected
    // derived.c = 300; // Compiler Error - Private

    return 0;
}
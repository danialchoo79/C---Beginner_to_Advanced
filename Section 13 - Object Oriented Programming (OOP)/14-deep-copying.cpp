/*
==========================================================
Description: Deep Copying.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    -Note (General):
    1. In Deep copy, an object is created by copying data of 
       all variables, and it also allocates similar memory resources 
       with the same value to the object. (GeeksforGeeks,2022)
    2. Main Difference is the Copy Constructor.
    3. Upon calling a deep constructor and its data and upon exiting the
       scope, destructor is called, and releases data.
    4. No problem with pointers pointing to a deleted memory as storage
       being released is unique to the deep constructor.

    -Note(Deep Constructor Syntax)
    Deep::Deep(int d)
    {
        data = new int; // allocate storage
        *data = d;
    }

    -Note(Deep Destructor Syntax)
    Deep::~Deep()
    {
        delete data; // free storage
        cout<<"Destructor freeing data."<<endl;
    }

    -Note(Copy Constructor Syntax)
    Deep::Deep(const Deep &source)
    {
        data = new int; // allocate storage
        *data = *source.data;
        cout<<"Copy constructor - deep"<<endl;
    }
*/

#include <iostream>
#include <string>

using namespace std;

class Deep
{
    private:
        int *data;
    public:
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}

        // Constructor
        Deep(int d);

        // Copy Constructor
        Deep(const Deep &source);

        // Destructor
        ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

// Copy Constructor
Deep::Deep(const Deep &source)
    :Deep(*source.data)
{
    cout<<"Copy Constructor - Deep Copy"<<endl;
}

Deep::~Deep()
{
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void display_shallow(Deep s)
{
    cout<<s.get_data_value()<<endl;
}

int main()
{
    Deep obj1 {100};
    display_shallow(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
}
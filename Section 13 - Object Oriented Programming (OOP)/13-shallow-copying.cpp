/*
==========================================================
Description: Shallow Copying.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    -Note (General):
    1. Memberwise Copy.
    2. Default for Copy Constructor.
    3. Pointer is Copied.
    4. Problem - when storage is released in destructor,
                 other object still refers to released
                 storage.
    5. This problem might cause program to crash.
    
    -Note (Shallow Constructor Syntax):
    Shallow:Shallow(int d)
    {
        data = new int; // allocates storage
        *data = d;
    }

    -Note (Shallow Destructor Syntax)
    Shallow::~Shallow()
    {
        delete data; // free storage
        cout<<"Destructor freeing data"<<endl;

    }

    -Note (Shallow Copy Constructor Syntax) 
    Shallow::Shallow(const Shallow &source)
        : data(source.data)
    {
        cout<<"Copy Constructor - shallow"<<endl;
    }
*/

#include <iostream>
#include <string>

using namespace std;

class Shallow
{
    private:
        int *data;
    public:
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}

        // Constructor
        Shallow(int d);

        // Copy Constructor
        Shallow(const Shallow &source);

        // Destructor
        ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

// Copy Constructor
Shallow::Shallow(const Shallow &source)
    :data(source.data)
{
    cout<<"Copy Constructor - Shallow Copy"<<endl;
}

Shallow::~Shallow()
{
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void display_shallow(Shallow s)
{
    cout<<s.get_data_value()<<endl;
}

int main()
{
    Shallow obj1 {100};
    display_shallow(obj1);

    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
}
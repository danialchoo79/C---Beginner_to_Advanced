/*
==========================================================
Description: Move Constructor.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    -Note (General):
    1. Sometimes when we execute code the compiler creates 
       unnamed temporary values.
    2. The same happens with objects as well.
    3. Move semantics is all about r-value references. (&&)
    4. Moves resource instead of Deep Copying. 
       (Copies Address of Resource from Source to current Object)
    5. Nulls out pointer in source pointer.
    6. Steals the data then null out source pointer.

    -Note (r-value reference syntax)
    Type::Type(Type &&source);

    -Note (move class move constructor)
    Type::Type(Type &&source)
        : data{source.data}
    {
        source.data  = nullptr;
    }

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move
{
    private:
        int *data;
    public:
        void set_data_value(int d) {*data = d;}
        int get_data_value() {return *data;}

        // Constructor
        Move(int d);

        // Copy Constructor
        Move(const Move &source);

        // Move Constructor
        Move(Move &&source) noexcept;

        // Destructor
        ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout<<"Constructor for: "<<d<<endl;
}

// Copy Constructor
Move::Move(const Move &source)
    :Move(*source.data)
{
    cout<<"Copy Constructor - Deep Copy for: "<<*data<<endl;
}

// Move Constructor
Move::Move(Move &&source) noexcept
    :data{source.data}
{
    source.data = nullptr;
    cout<<"Move Constructor - moving resource: "<<*data<<endl;
}

// Move Destructor
Move::~Move()
{
    if(data!=nullptr)
    {
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }
    else
    {
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main()
{
   vector<Move> vec;
   vec.push_back(Move{10});
   vec.push_back(Move{20});
   vec.push_back(Move{30});
   vec.push_back(Move{40});
   vec.push_back(Move{50});
   vec.push_back(Move{60});
   vec.push_back(Move{70});
   vec.push_back(Move{80});

   return 0;
}
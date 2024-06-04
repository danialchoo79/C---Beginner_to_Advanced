/*
==========================================================
Description: Basic Usage of Copy Constructor.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note(Use Cases):
    1. Pass object by-value.
    2. Return object by value.
    3. Construct one object based on another.

    Note(Default):
    1. Copying objects by value not provided, then
       compiler provides default way of copying
       objects.
    
    Note(Best Practices):
    1. Raw Pointer Members - provide Copy Constructor.
    2. Provide it with a const reference parameter.
    3. Use Standard Template Library classes.
    4. Avoid using raw data pointer members.

    Note(Syntax):
    Type::Type(const Type &source);
*/

#include <iostream>
#include <string>

using namespace std;

class Player 
{
    private: 
        // Attributes
        string name;
        int health;
        int xp;

    public:
        string get_name() {return name;}
        int get_health() {return health;}
        int get_xp() {return xp;}

        // Constructor Parameters w Default Values
        Player(string name_val="None", int health_val=0, int xp_val=0);

        // Copy Constructor
        Player(const Player &source);

        // Destructor
        ~Player() {cout<<"Destructor called for: "<<name<<endl;}
};

// Constructor Initialisation List
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout<<"Three-args constructor."<<endl;
}

// Copy Constructor
// Note: This is where empty becomes p.
Player::Player(const Player &source)
    : name{source.name}, health(source.health),xp(source.xp)
{
    cout<<"Copy Constructor - made copy of: "<<source.name<<endl;
}

// Pass by Value
// Note as it leaves the scope of this function, \
   destructor will be called.
void display_player(Player p)
{
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}

int main()
{
    Player empty;

    display_player(empty);

    Player frank {"Frank"};
    Player hero{"Hero",100};
    Player villain{"Villain",100,55};

    return 0;
}

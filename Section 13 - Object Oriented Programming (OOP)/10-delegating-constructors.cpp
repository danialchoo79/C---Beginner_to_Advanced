/*
==========================================================
Description: Delegating Constructors.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Refactoring 09 constructor initialisation list
    by delegating them.

    09 Code:

    Player::Player()
        : name{"None"}, health{0},xp{0}
    {}

    Player::Player(string name_val)
        : name{name_val}, health{0}, xp{0}
    {}

    Player::Player(string name_val, int health_val, int xp_val)
        : name{name_val}, health{health_val}, xp{xp_val}
    {}
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
        // Overloaded Constructors
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
        Player(int restore_health, int health_val);
};

// Calling Constructors from Constructors
Player::Player()
    : Player("None",0,0)
{
    cout<<"No-args constructor."<<endl;
}

Player::Player(string name_val)
    : Player(name_val,0,0)
{
    cout<<"One-args constructor."<<endl;
}

// Callee Constructor - Any Calling Constructors will run \
                        the below block first before running \
                        their local operations within their \
                        own scope
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout<<"Three-args constructor."<<endl;
}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain{"Villain",100,55};

    return 0;
}

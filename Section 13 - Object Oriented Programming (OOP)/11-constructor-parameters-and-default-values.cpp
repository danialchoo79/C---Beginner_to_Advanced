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
        // Constructor Parameters w Default Values
        Player(string name_val="None", int health_val=0, int xp_val=0);
};

// Constructor Initialisation List
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout<<"Three-args constructor."<<endl;
}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player hero{"Hero",100};
    Player villain{"Villain",100,55};

    return 0;
}

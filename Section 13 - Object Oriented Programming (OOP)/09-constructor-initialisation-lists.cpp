/*
==========================================================
Description: Basic usage of Constructor Initialisation Lists.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    - More efficient.
    - Follows Parameter Lists.
    - Initialises Data Members as Object is created.
    - Order of Initialisation is order of declaration in class.

    Examples:

    (a) Assignment.
    Player::Player() 
    {
        name = "None";
        health = 0;
        xp = 0;
    }

    (b) Initialisation using Constructor Initialisation List. 
        [BETTER - MORE EFFICIENT]
    Player::Player()
        : name{"None"},health{0},xp{0} {
    }

    It is more efficient as it does not have redundancy where it 
    initialises objects then assigns data to it. Method (b) already 
    has the data with the object.
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

// Scope Resolution then Assignment

// Player::Player()
// {
//     name ="None";
//     health = 0;
//     xp = 0;
// }

// Player::Player(string name_val)
// {
//     name = name_val;
//     health = 0;
//     xp = 0;
// }

// Player::Player(string name_val, int health_val, int xp_val)
// {
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
// }

// Using Constructor Lists

Player::Player()
    : name{"None"}, health{0},xp{0}
{}

Player::Player(string name_val)
    : name{name_val}, health{0}, xp{0}
{}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain{"Villain",100,55};
    return 0;
}

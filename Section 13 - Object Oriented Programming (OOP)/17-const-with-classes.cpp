/*
==========================================================
Description: Using const with classes.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    Note(Good Practice)
    1. A good practice is all getters are const.

    -Note(Example Syntax - Const Correctness)

    class Player 
    {
        private:
            . . .
        public:
            std::string get_name() const;
    };
*/

#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        // const here acts as a guarantee for \
           no change will be done in the function.
        string get_name() const
        {
            return name;
        }
        void set_name(string name_val)
        {
            name = name_val;
        }
        // Overloaded Constructors
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
};

// Delegating Constructors
Player::Player()
    :Player {"None",0,0}
{}

Player::Player(string name_val)
    :Player {name_val,0,0}
{}

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}
{}

// Copy Constructors
void display_player_name(const Player &p)
{
    cout<<p.get_name()<<endl;
}

int main()
{
    const Player villain {"Villain",100,55};
    Player hero {"Hero",100,15};

    display_player_name(hero);

    return 0;
}





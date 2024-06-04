#include "Player.h"

// Static Initialisation done here.
int Player::num_players {0};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val}
{
    // Increment number of players
    ++num_players;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
{}

Player::~Player()
{
    // Decrement number of players
    --num_players;
}

int Player::get_num_players()
{
    return num_players;
}
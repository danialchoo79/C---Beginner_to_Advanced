#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using namespace std;

class Player
{
    private:
        static int num_players;
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
        int get_health() const
        {
            return health;
        }
        int get_xp() const
        {
            return xp;
        }

        // Overloaded Constructors
        Player(string name_val="None", int health_val=0, int xp_val=0);

        // Copy Constructor
        Player(const Player &source);

        // Destructor
        ~Player();

        // Only has access to static_num, not other objects or methods.
        static int get_num_players();
};

#endif // _PLAYER_H_




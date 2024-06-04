/*
==========================================================
Description: Basic usage of Default Constructors.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    - Does not expect any arguments.
    - C++ generates default constructors no constructors.
      are written for a class.
    - Called when instantiate new object with no arguments.
    - Uninitialized stores garbage data.
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
        /*
            Methods - No Constructors
            1. A default no args constructors will be created.
        */ 
        void set_name(string name_val)
        {
            name = name_val;
        }
        string get_name()
        {
            return name;
        }
        // Default no args constructor
        Player()
        {
            name = "None";
            health = 100;
            xp = 3;
        }
        // Overloaded Constructor
        Player(string name_val, int health_val, int xp_val)
        {
            name = name_val;
            health = health_val;
            xp = xp_val;
        }
};

int main()
{
    Player frank;
    frank.set_name("Frank");
    cout<<frank.get_name()<<endl;
    return 0;
}

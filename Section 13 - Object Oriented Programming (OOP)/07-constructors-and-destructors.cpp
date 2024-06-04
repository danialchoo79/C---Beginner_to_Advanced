/*
==========================================================
Description: Basic usage of Constructors and Destructors.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Constructors
        - Special member method.
        - Invoked during Object Creation.
        - Initialization.
        - Same name as class.
        - No return type specified.
        - Can be overloaded.

    2. Destructors
        - Special member method.
        - Same name as class preceded with ~.
        - Invoked automatically when destroyed.
        - No return type and no parameters.
        - Only 1 destructor per class. Cannot be overloaded.
        - Useful to release memory and other resources.

    3. Creating Objects
        - Upon creating and used. Destructor is called.
          This frees up memory.
        - If no constructor or destructor is called, a default one
          will be created automatically.
        - Destructors are called in reverse order from when it is created.
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
        // Methods
        void set_name(string name_val)
        {
            name = name_val;
        }
        // Overloaded Constructors
        Player()
        {
            cout<<"No args constructor called"<<endl;
        }
        Player(string name)
        {
            cout<<"String arg constructor called"<<endl;
        }
        Player(string name, int health, int xp)
        {
            cout<<"Three args constructor called"<<endl;
        }
        ~Player()
        {
            cout<<"Destructor called for "<<name<<endl;
        }
};

int main()
{
    /* Note:
        - Each of them are within their own local scope.
        - Done so that destructor is called immediately once it goes out of scope.
        - This is for demonstration purposes.
    */

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain",100,12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss",1000,3000);
    level_boss->set_name("Level Boss");

    // This will delete them in order.
    delete enemy;
    delete level_boss;

    return 0;
}

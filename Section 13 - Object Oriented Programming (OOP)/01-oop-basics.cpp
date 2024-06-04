/*
==========================================================
Description: Basics of OOP.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes (Generic Knowledge of OOP):
    a) Limitations of Procedural Programming:
    1. Functions need to know the structure of the data.

    (b) Object Oriented Programming:
    1. Uses Classes and Objects - allows developers to 
                                  think at a higher level of 
                                  abstraction.
    2. Uses Encapsulation, Information-Hiding.
    3. Uses Inheritance.
    4. Uses Polymorphic Classes.
    3. Has Reusability.

    (c) Limitations of OOP
    1. Not a solution for everything.
    2. Steep learning curve.
    3. Program may be larger in size, slower and more complex.
*/

/*
    Notes (Classes & Objects):

    a) Classes 
    1. Has attributes and methods.
    2. Can hide data and methods.
    3. Provides a public interface.

    b) Objects
    1. Created from class. 
       Represents specific instance of a class. 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
    // Attributes
    string name {"Player"};
    int health;
    int xp;

    // Methods
    void talk(string);
    bool is_dead();
};

class Account
{
    // Attributes with Initialisation
    string name {"Account"};
    double balance {0.0};

    // Methods
    bool deposit(double);
    bool withdraw(double);
};


int main()
{
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players [] {frank,hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    cout<<endl;

    return 0;
}

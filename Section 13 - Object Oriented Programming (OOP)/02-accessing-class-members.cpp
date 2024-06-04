/*
==========================================================
Description: Accessing Class Members.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Pointer to an Object
        e.g. Account *frank_account = new Account();
        
        (a) Dereference the pointer and use the dot operator.

            (*frank_account).balance;

        (b) Member of Pointer Operator

            frank_account->balance;
*/


#include <iostream>
#include <string>

using namespace std;

class Player 
{
    public: 
        // Attributes
        string name;
        int health;
        int xp;

        // Methods
        void talk(string text_to_say)
        {
            cout<<name<<" says "<<text_to_say<<endl;
        }

        bool is_dead();
};

class Account
{
    public:
        // Attributes
        string name;
        double balance;

        // Methods
        bool deposit(double bal) {balance += bal;cout<<"In Deposit."<<endl;}
        bool withdraw(double bal) {balance -= bal; cout<<"In Withdrawal."<<endl;}
};

int main()
{
    Account frank_account;
    frank_account.name  = "Frank's Account";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("Hi There!");

    // Using Pointers
    Player *enemy = new Player;

    // Dereferencing
    (*enemy).name = "Enemy";
    (*enemy).health = 100;

    // Member of Pointer Operator
    enemy->talk("I will destroy you!");

    return 0;
}

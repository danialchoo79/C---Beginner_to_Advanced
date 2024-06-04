/*
==========================================================
Description: Basic usage of public and private for OOP.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Public - Accessible everywhere.
    2. Private - Accessible only by members or friends of the class. Else compiler error.
    3. Protected - Used with inheritance.
*/

#include <iostream>
#include <string>

using namespace std;

class Player 
{
    private: 
        // Attributes
        string name {"Player"};
        int health;
        int xp;

    public:
        // Methods
        void talk(string text_to_say)
        {
            cout<<name<<" says "<<text_to_say<<endl;
        }

        bool is_dead();
};

int main()
{
    Player frank;

    frank.talk("Hello There");
    

    return 0;
}

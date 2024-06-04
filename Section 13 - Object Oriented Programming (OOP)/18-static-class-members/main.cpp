/*
==========================================================
Description: Static Class Members.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    Notes:
    1. Data member belongs to the class not objects.
    2. Useful to store class-wide information.

    Syntax (Example):

    class Player
    {
        private:
            static int num_players;
        public:
            static int get_num_players();
            ....
    };

    To compile you can run this from using root directory:
    g++ -o output_file_name main.cpp player.cpp

    To run
    ./output_file_name
*/

/*
    Notes (Structs vs Classes)
    - Same as class but members are public by default.

    Notes (Choosing between Structs and Classes)
    1. Struct - Passive Objects w Public Access, 
                Don't declare methods in struct.
    3. Class - Active Objects w Private Access,
               Implement getters/setters as needed.
               Implement member methods as needed.
*/

#include <iostream>
#include "Player.h"

using namespace std;

void display_active_players()
{
    cout<<"Active players: "<<Player::get_num_players()<<endl;
}

int main()
{
    display_active_players();
    Player hero{"Hero"};
    display_active_players();

    // Creating objects in the Heap
    Player *enemy = new Player("Enemy",100,100);
    display_active_players();
    delete enemy;

    return 0;
}
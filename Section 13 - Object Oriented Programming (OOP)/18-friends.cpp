/*
==========================================================
Description: Using Friends.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/* 
    Notes
    1. A function/class that has access to private class member.
    2. Not a member of class it is accessing.

    Note(For Function)
    a. Can be regular non-member functions.
    b. Can be member methods of another class.

    Note(For Class)
    a. Another class can have access to private class members.
    b. Friendship must be granted NOT taken. It is not symmetric 
       and not transitive and not inherited.

    Note(Example Syntax)
    class Player
    {
        friend void display_player(Player &p);
        string name;
        int health;
        int xp;

        public:
            . . .
    };
*/
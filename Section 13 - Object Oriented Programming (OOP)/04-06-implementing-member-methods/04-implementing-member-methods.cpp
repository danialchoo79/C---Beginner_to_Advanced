/*
==========================================================
Description: Basic Implementation of Member Methods.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes:
    1. Can be implemented inside the class declaration. (inline)
    2. Can be implemented outside the class declaration. (class_name::method_name)
    3. Can be a separate specification from implementation. (.h for class declaration, 
                                                             .cpp for class implementation)
    4. An include guard can be used to prevent compiler error for duplicate declaration of classes.

        #ifndef _XYZ_H_
        #define _XYZ_H_

        #endif

        If the preprocessor has that name defined, skips entire file and goes to endif.
    5. #pragma once may be used if compiler supports it.
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

/*
==========================================================
Description: Basic usage of c-style strings.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character-based functions

using namespace std;

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout<<"Please enter your first name: ";
    cin>>first_name;
    cin.ignore(); // clears newline character from input buffer

    cout<<"Please enter your last name: ";
    cin>>last_name;
    cin.ignore();

    cout<<"------------------"<<endl;

    cout<<"Hello, "<<"your first name, "<<first_name<<" has "<<strlen(first_name)<<" characters."<<endl;
    cout<<"Your last name, "<<last_name<<" has "<<strlen(last_name)<<" characters."<<endl;

    cout<<"------------------"<<endl;

    // Copying and Concatenating Strings
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout<<"Your full name is "<<full_name<<"."<<endl; 

    cout<<"------------------"<<endl;  

    // Clearing a C-Style String
    full_name[0] = '\0';
    cout<<"After clearing string, I get: "<<full_name<<endl;

    cout<<"------------------"<<endl;

    // Getting strings with spaces
    cout<<"Enter your full name: ";
    cin.getline(full_name, 50);
    cout<<"Your full name is "<<full_name<<endl;

    cout<<"------------------"<<endl;

    // Comparing Strings
    cout<<"1. Comparing strings from original char array and a copied string in temp."<<endl;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0)
        cout<<temp<<" and "<<full_name<<" are the same."<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are different."<<endl;
    
    cout<<"------------------"<<endl;

    // Converting full name to Uppercase
    for(size_t i{0}; i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout<<"Your full name, now in uppercase:  "<<full_name<<endl;

    cout<<"------------------"<<endl;

    // Converting full name to Lowercase
    for(size_t i{0}; i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
            full_name[i] = tolower(full_name[i]);
    }
    cout<<"Your full name, now in lowercase:  "<<full_name<<endl;







    return 0;
}
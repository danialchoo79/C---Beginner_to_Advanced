/*
==========================================================
Description: Substitution cipher using string library. (Encryption / Decryption)

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message{};

    string encrypted_string {};

    size_t alphabet_position{};

    size_t key_position{};

    cout<<"Enter your secret message: ";

    getline(cin,message);

    cout<<"\nEncrypting message..."<<endl;

    
    for(size_t i{0}; i<message.size(); i++)
    {
        // Encryption Block
        if (alphabet.find(message.at(i))!= std::string::npos)
        {
            alphabet_position = alphabet.find(message.at(i));

            char encrypted_alphabet = key.at(alphabet_position);

            cout<<encrypted_alphabet;

            encrypted_string.push_back(encrypted_alphabet);
        }
        // Not found in Alphabet
        else
        {
            char unencrypted_alphabet = message.at(i);

            cout<<unencrypted_alphabet;

            encrypted_string.push_back(unencrypted_alphabet);
        }
    }

    cout<<endl;

    cout<<"\nDecrypting message..."<<endl;

    for(size_t i{0}; i<encrypted_string.size(); i++)
    {
        // Decryption Block
        if (key.find(encrypted_string.at(i))!= std::string::npos)
        {
            key_position = key.find(encrypted_string.at(i));

            char decrypted_key = alphabet.at(key_position);

            cout<<decrypted_key;
        }
        // Not found in Key
        else
        {
            char unencrypted_key = encrypted_string.at(i);

            cout<<unencrypted_key;
        }
    }

    return 0;
}
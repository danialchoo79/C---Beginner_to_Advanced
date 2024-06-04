/*
==========================================================
Description: Basic usage of cpp-style strings (2).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1,0,3};

    cout<<s0<<endl; // no garbage
    cout<<s0.length()<<endl; // empty string

    cout<<endl;

    // String initialization
    cout<<"Initialization"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<" s1 is initialized to "<<s1<<endl;
    cout<<" s2 is initialized to "<<s2<<endl;
    cout<<" s3 is initialized to "<<s3<<endl;
    cout<<" s4 is initialized to "<<s4<<endl;
    cout<<" s5 is initialized to "<<s5<<endl;
    cout<<" s6 is initialized to "<<s6<<endl;

    cout<<endl;

    // Comparison
    cout<<"Comparison"<<endl;
    cout<<boolalpha;
    cout<<"--------------------------"<<endl;
    cout<<s1<<" == "<<s5<<" : "<<(s1==s5)<<endl;
    cout<<s1<<" == "<<s2<<" : "<<(s1==s2)<<endl;
    cout<<s1<<" != "<<s2<<" : "<<(s1!=s2)<<endl;
    cout<<s1<<" < "<<s2<<" : "<<(s1<s2)<<endl;
    cout<<s2<<" > "<<s1<<" : "<<(s2>s1)<<endl;
    cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl;
    cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl;

    cout<<endl;

    // Assignment
    cout<<"Assignment"<<endl;
    cout<<"--------------------------"<<endl;

    s1 = "Watermelon";
    cout<<"s1 is now: "<<s1<<endl;

    s2 = s1;
    cout<<"s2 is now: "<<s2<<endl;

    s3 = "Frank";
    cout<<"s3 is now: "<<s3<<endl;

    s3[0] = 'C';
    cout<<"s3 changed its first letter to 'C': "<<s3<<endl;

    s3.at(0) = 'P';
    cout<<"s3 changed its first letter to 'P': "<<s3<<endl;

    cout<<endl;

    // Concatenation
    s3 = "Watermelon";
    cout<<"Concatenation"<<endl;
    cout<<"--------------------------"<<endl;

    s3 = s5 + " and " + s2 + " juice";
    cout<<"s3 is now: "<<s3<<endl;

    cout<<endl;

    // For Loop
    cout<<"Looping"<<endl;
    cout<<"--------------------------"<<endl;

    s1 = "Apple";

    for(size_t i{0}; i<s1.length(); i++)
        cout<<s1.at(i);
    cout<<endl<<endl;

    // Range-Based For Loop
    cout<<"Range Based Looping"<<endl;
    cout<<"--------------------------"<<endl;

    for(char c:s1)
        cout<<c;
    cout<<endl<<endl;

    // Substring
    cout<<"Range Based Looping"<<endl;
    cout<<"--------------------------"<<endl;

    s1 = "This is a test";

    cout<<s1.substr(0,4)<<endl;
    cout<<s1.substr(5,2)<<endl;
    cout<<s1.substr(10,4)<<endl;

    cout<<endl;

    // Erase
    cout<<"Erase"<<endl;
    cout<<"--------------------------"<<endl;

    s1 = "This is a test";
    s1.erase(0,5);
    cout<<"s1 is now: "<<s1<<endl;

    cout<<endl;

    // Getline
    cout<<"Getline"<<endl;
    cout<<"--------------------------"<<endl;

    string full_name{};

    cout<<"Enter your full name: ";
    getline(cin, full_name);

    cout<<"Your full name is: "<<full_name<<endl;

    cout<<endl;

    // Find
    cout<<"Find"<<endl;
    cout<<"--------------------------"<<endl;
    
    s1 = "The secret word is Boo";
    string word {};

    cout<<"Enter the word to find: ";
    cin>>word;

    size_t position = s1.find(word);

    if(position != string::npos)
        cout<<"Found "<<word<<" at position: "<<position<<endl;
    else
        cout<<"Sorry, "<<word<<" is not found."<<endl;
    
    cout<<endl;

    return 0;
}
/*
==========================================================
Description: Basics of Unscoped Enumerations.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note (Syntax):
        enum enum-name : enumerator-type { };
    
    Notes (Uses):
        1. Using if and switch statements with unscoped 
           enumerations.
        2. Using cin and cout.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Used for test 1
// Note for unscoped enumerations - you cannot reuse the \
   names in the enum list.
enum Direction {North, South, East, West};

// Used for test 1
string direction_to_string(Direction direction)
{
    string result;
    switch(direction)
    {
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
       case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown Direction"; 
    }
    return result;
}

void test1()
{
    cout<<"\n----------------Test 1----------------\n"<<endl;

    Direction direction{North};
    cout<<"Direction "<<direction<<endl;
    cout<<direction_to_string(direction)<<endl;

    direction = West;
    cout<<"\nDirection "<<direction<<endl;
    cout<<direction_to_string(direction)<<endl;

    // Casting
    direction = Direction(100);
    cout<<"\nDirection "<<direction<<endl;
    cout<<direction_to_string(direction)<<endl;

    // Casting
    direction = static_cast<Direction>(100);
    cout<<"\nDirection "<<direction<<endl;
    cout<<direction_to_string(direction)<<endl;
}

// Used for test 2
enum Grocery_Item {Milk, Bread, Apple, Orange};

// Used for test2
ostream &operator<<(ostream &os, Grocery_Item grocery_item)
{
    switch(grocery_item)
    {
        case Milk:
            os<<"Milk";
            break;
        case Bread:
            os<<"Bread";
            break;
        case Apple:
            os<<"Apple";
            break;
        case Orange:
            os<<"Orange";
            break;
        default:
            os<<"Invalid Item";
    }
    return os;
}

// Used for test 2
bool is_valid_grocery_item(Grocery_Item grocery_item)
{
    switch(grocery_item)
    {
        case Milk:
        case Bread:
        case Apple:
        case Orange:
            return true;
        default:
            return false;
    }
}

// Used for test 2
void display_grocery_list(const vector<Grocery_Item> &grocery_list)
{
    cout<<"Grocery List"<<"\n============================="<<endl;
    int invalid_item_count{0};
    int valid_item_count{0};
    for(Grocery_Item grocery_item : grocery_list)
    {
        cout<<grocery_item<<endl;

        if(is_valid_grocery_item(grocery_item))
            valid_item_count++;
        else
            invalid_item_count++;
    }
    cout<<"================================="<<endl;
    cout<<"Valid items: "<<valid_item_count<<endl;
    cout<<"Invalid items: "<<invalid_item_count<<endl;
    cout<<"Total items: "<<valid_item_count + invalid_item_count<<endl;
}

void test2()
{
    cout<<"\n----------------Test 2----------------\n"<<endl;

    vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);

    // Careful with Casting
    int Helicopter {1000};

    shopping_list.push_back(Grocery_Item(Helicopter)); // Invalid Item
    shopping_list.push_back(Grocery_Item(0)); // Adds Milk again

    display_grocery_list(shopping_list);
}

// Used for test3
enum State {Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence{Abort, Hold, Launch};

// Used for test3
istream &operator>>(istream &is, State &state)
{
    underlying_type_t<State> user_input;
    is >> user_input;

    switch(user_input)
    {
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;
        default:
            cout<<"User input is not a valid launch state."<<endl;
            state = Unknown;
    }
    return is;
}

// Used for test3
ostream &operator<<(ostream &os, const Sequence &sequence)
{
    switch(sequence)
    {
        case Abort:
            os<<"Abort";
            break;
        case Hold:
            os<<"Hold";
            break;
       case Launch:
            os<<"Launch";
            break; 
    }
    return os;
}

// Used for test3
void initiate(Sequence sequence)
{
    cout<<"Initiate "<<sequence<<" sequence!"<<endl;
}

void test3()
{
    cout<<"\n----------------Test 2----------------\n"<<endl;

    State state;
    cout<<"Launch state: ";
    cin>>state;

    switch(state)
    {
        case Engine_Failure:
        case Unknown:
            initiate(Abort);
            break;
        case Inclement_Weather:
            initiate(Hold);
            break;
        case Nominal:
            initiate(Launch);
            break;
    }
}

int main()
{
    test1();
    test2();
    test3();
    return 0;
}
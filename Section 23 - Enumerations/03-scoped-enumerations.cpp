/*
==========================================================
Description: Basics of Scoped Enumerations.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Notes
        1. Syntax
            enum class enum-name : enumerator-type { };
        2. Must cast variable to specific types
*/

#include <iostream>
#include <vector>

using namespace std;

// Used for test 1
enum class Grocery_Item {Milk=350, Bread=250, Apple=132, Orange=100};

// Used for test 1
ostream &operator<<(ostream &os, Grocery_Item grocery_item)
{
    underlying_type_t<Grocery_Item> value = underlying_type_t<Grocery_Item>(grocery_item);
    switch(grocery_item)
    {
        case Grocery_Item::Milk:
            os<<"Milk";
            break;
        case Grocery_Item::Bread:
            os<<"Bread";
            break;
        case Grocery_Item::Apple:
            os<<"Apple";
            break;
        case Grocery_Item::Orange:
            os<<"Orange";
            break;
        default:
            os<<"Invalid item";
    }
    os<<" : "<<value;
    return os;
}

// Used for test 1
bool is_valid_grocery_item(Grocery_Item grocery_item)
{
    switch(grocery_item)
    {
        case Grocery_Item::Milk:
        case Grocery_Item::Bread:
        case Grocery_Item::Apple:
        case Grocery_Item::Orange:
            return true;
        default:
            return false;
    }
}

// Used for test 1
void display_grocery_list(const vector<Grocery_Item> &grocery_list)
{
    cout<<"Grocery List"<<"\n================================"<<endl;
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
    cout<<"======================================"<<endl;
    cout<<"Valid items: "<<valid_item_count<<endl;
    cout<<"Invalid items: "<<invalid_item_count<<endl;
    cout<<"Total items: "<<valid_item_count + invalid_item_count<<endl; 
}

void test1()
{
    cout<<"\n---------------Test1----------------------\n"<<endl;
    vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Milk);
    shopping_list.push_back(Grocery_Item::Orange);

    int Helicopter {1000};
    shopping_list.push_back(Grocery_Item(Helicopter));
    shopping_list.push_back(Grocery_Item(350));

    display_grocery_list(shopping_list);   
}

// Used for test 2
class Player
{
    friend ostream &operator<<(ostream &os, const Player &p);

    public:
        enum class Mode {Attack, Defense, Idle};
        enum class Direction {North, South, East, West};

        Player(string name, Mode mode=Mode::Idle, Direction direction = Direction::North) 
            :name{name}, mode{mode}, direction{direction}
        {}
        
        string get_name() const
        {
            return name;
        }

        void set_name(string name)
        {
            this->name = name;
        }

        Mode get_mode() const {return mode;}

        void set_mode(Mode mode)
        {
            this->mode = mode;
        }

        Direction get_direction() const {return direction;}

        void set_direction(Direction direction)
        {
            this->direction = direction;
        }
    
    private:
        string name;
        Mode mode;
        Direction direction;
};

// Used for test 2
string get_player_mode(Player::Mode mode)
{
    string result;

    switch(mode)
    {
        case Player::Mode::Attack:
            result = "Attack";
            break;
        case Player::Mode::Defense:
            result = "Defense";
            break;
        case Player::Mode::Idle:
            result = "Idle";
            break;
    }
    return result;
}

// Used for test 2
string get_player_direction(Player::Direction direction)
{
    string result;

    switch(direction)
    {
        case Player::Direction::North:
            result = "North";
            break;
        case Player::Direction::South:
            result = "South";
            break;
        case Player::Direction::East:
            result = "East";
            break;
        case Player::Direction::West:
            result = "West";
            break;
    }
    return result;
}

// Used for test 2
ostream &operator<<(ostream &os, const Player &p)
{
    os<<"Player name:       "<<p.get_name()<<"\n"
      <<"Player mode:       "<<get_player_mode(p.mode)<<"\n"
      <<"Player direction:  "<<get_player_direction(p.direction)
      <<endl;
    
    return os;
}

void test2()
{
    cout<<"\n===============================================\n"<<endl;

    Player p1{"Cloud Strife", Player::Mode::Attack, Player::Direction::North};
    Player p2{"Tifa Lockhart", Player::Mode::Defense, Player::Direction::West};
    Player p3{"Sephiroth", Player::Mode::Idle, Player::Direction::South};

    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
}

int main()
{
    test1();
    test2();
    return 0;
}
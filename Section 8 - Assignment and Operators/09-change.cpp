/*
==========================================================
Description: Basic change currency.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:
1 dollars = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cents
*/


#include <iostream>
using namespace std;

int main()
{
    int change{};
    int dollar_change{};
    int quarter_change{};
    int dime_change{};
    int nickel_change{};
    int penny_change{};

    cout<<"Enter the amount of change: ";
    cin>>change;

    if(change>=100)
    {
        const int dollars{100};
        dollar_change = change / dollars;
        change -= dollar_change*dollars;
    }

    if (change>=25)
    {
        const int quarters{25};
        quarter_change = change / quarters;
        change -= quarter_change*quarters;
    }

    if (change>=10)
    {
        const int dime{10};
        dime_change = change / dime;
        change -= dime_change*dime;
    }

    if (change>=5)
    {
        const int nickel{5};
        nickel_change = change / nickel;
        change -= nickel_change*nickel;
    }

    if (change>=1)
    {
        const int penny{1};
        penny_change = change / penny;
        change -= penny_change*penny;
    }

    cout<<"Dollar: "<<dollar_change<<endl;
    cout<<"Quarter: "<<quarter_change<<endl;
    cout<<"Dime: "<<dime_change<<endl;
    cout<<"Nickel: "<<nickel_change<<endl;
    cout<<"Penny: "<<penny_change<<endl;

    return 0;
}

#include <iostream>
#include "Account.h"

// Base Class Implementation

// Constructor
Account::Account()
    : balance{0}, name{"An Account"}
{}

// Destructor
Account::~Account()
{}

void Account::deposit(double amount)
{
    std::cout<<"Account desposit called with "<<amount<<std::endl;
}

void Account::withdraw(double amount)
{
    std::cout<<"Account withdraw called with "<<amount<<std::endl;
}

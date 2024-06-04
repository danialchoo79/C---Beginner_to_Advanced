#include <iostream>
#include "Savings_Accounts.h"

Savings_Accounts::Savings_Accounts()
    : int_rate{3.0}
{}

Savings_Accounts::~Savings_Accounts()
{}

void Savings_Accounts::deposit(double amount)
{
    std::cout<<"Savings Account deposit called with "<<amount<<std::endl;
}

void Savings_Accounts::withdraw(double amount)
{
    std::cout<<"Savings Account withdraw called with "<<amount<<std::endl;
}
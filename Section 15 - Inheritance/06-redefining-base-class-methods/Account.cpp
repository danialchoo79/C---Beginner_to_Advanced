#include "Account.h"

// Delegating Constructor
Account::Account() 
    : Account{0.0}
{} 

Account::Account(double balance)
    : balance{balance}
{}

void Account::deposit(double amount)
{
    balance += amount;
}

void Account::withdraw(double amount)
{
    if(balance-amount >= 0)
        balance -= amount;
    else
        std::cout<<"Insufficient funds"<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os<<"Account Balance: "<<account.balance;
    return os;
}
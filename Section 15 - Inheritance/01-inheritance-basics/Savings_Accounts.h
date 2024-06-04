#ifndef _SAVINGS_ACCOUNTS_H
#define _SAVINGS_ACCOUNTS_H
#include "Account.h"

class Savings_Accounts : public Account
{
    public:
        double int_rate;
        Savings_Accounts();
        ~Savings_Accounts();
        void deposit(double amount);
        void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNTS_H

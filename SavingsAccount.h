#ifndef INHERITANCE_SAVINGSACCOUNT_H
#define INHERITANCE_SAVINGSACCOUNT_H

#include <iostream>
#include "Account.h"

class SavingsAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os , const SavingsAccount &account);

private:

    static constexpr const char *defaultName = "Unnamed Savings Account";
    static constexpr double defaultBalance = 0.0;
    static constexpr double defaultInterestRate = 0.0;

protected:

    double interestRate;

public:

    SavingsAccount(std::string name = defaultName , double balance = defaultBalance , double interestRate = defaultInterestRate);

    bool deposit(double amount);
    // inherit the Account::withdraw method

};

#endif //INHERITANCE_SAVINGSACCOUNT_H
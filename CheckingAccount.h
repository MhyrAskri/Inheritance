#ifndef INHERITANCE_CHECKINGACCOUNT_H
#define INHERITANCE_CHECKINGACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class CheckingAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os , const CheckingAccount &account);

private:

    static constexpr const char *defaultName = "Unnamed Checking Account";
    static constexpr double defaultBalance = 0.0;
    static constexpr double perCheckFee = 1.5;

public:

    CheckingAccount(std::string name = defaultName , double balance = defaultBalance);
    bool withdraw(double);
    // inherits the Account::deposit method

};

#endif //INHERITANCE_CHECKINGACCOUNT_H

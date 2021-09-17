#include <iostream>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(std::string name, double balance, double interestRate)
    : Account {name , balance} , interestRate {interestRate}{

}

bool SavingsAccount::deposit(double amount) {

    amount += amount * (interestRate/100);
    return Account::deposit(amount);

}

std::ostream &operator<<(ostream &os, const SavingsAccount &account) {

    os << "[ Savings Account: " << account.name << ": " << account.balance << " , " << account.interestRate << "% ]";
    return os;

}

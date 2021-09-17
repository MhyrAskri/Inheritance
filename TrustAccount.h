#ifndef INHERITANCE_TRUSTACCOUNT_H
#define INHERITANCE_TRUSTACCOUNT_H

#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount {

    friend std::ostream &operator<<(std::ostream &os , const TrustAccount &account);

private:

    static constexpr const char *defaultName = "Unnamed Trust Account";
    static constexpr double defaultBalance = 0.0;
    static constexpr double defaultInterestRate = 0.0;
    static constexpr double bonusAmount = 50.0;
    static constexpr double bonusThreshold = 5000.0;
    static constexpr int maxWithdrawals = 3;
    static constexpr double maxWithdrawPercent = 0.2;

protected:

    int numWithdrawals;

public:

    TrustAccount(std::string name = defaultName , double balance = defaultBalance , double interestRate = defaultInterestRate);

    // deposit of $5000.00 or more will receive $50 bonus
    bool deposit(double amount);

    // only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    bool withdraw(double amount);

};

#endif //INHERITANCE_TRUSTACCOUNT_H

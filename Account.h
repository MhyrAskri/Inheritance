#ifndef INHERITANCE_ACCOUNT_H
#define INHERITANCE_ACCOUNT_H

#include <string>

class Account {

    friend std::ostream &operator<<(std::ostream &os , const Account &account);

private:

    static constexpr const char *defaultName = "Unnamed Account";
    static constexpr double defaultBalance = 0.0;

protected:

    std::string name;
    double balance;

public:

    Account(std::string name = defaultName , double  balance = defaultBalance);
//    Account(std::string name = "Unnamed Account" , double balance = 0.0);     // other option for line 23

    bool deposit(double amount);
    bool withdraw(double amount);
    double getBlance() const;

};

#endif //INHERITANCE_ACCOUNT_H
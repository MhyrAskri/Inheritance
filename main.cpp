#include <iostream>
#include <vector>
#include <conio.h>
#include "SavingsAccount.h"
#include "AccountUtil.h"

using namespace std;

int main() {

    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe" , 2000});
    accounts.push_back(Account {"Curly" , 5000});

    display(accounts);
    deposit(accounts , 1000);
    withdraw(accounts , 2000);
    //===============================================

    // Savings Accounts
    vector<SavingsAccount> saveAccounts;
    saveAccounts.push_back(SavingsAccount {});
    saveAccounts.push_back(SavingsAccount {"Superman"});
    saveAccounts.push_back(SavingsAccount {"Batman" , 2000});
    saveAccounts.push_back(SavingsAccount {"Wonderwoman" , 5000 , 5.0});

    display(saveAccounts);
    deposit(saveAccounts , 1000);
    withdraw(saveAccounts , 2000);
    //===============================================

    // Checking Accounts
    vector<CheckingAccount> checkAccounts;
    checkAccounts.push_back(CheckingAccount {});
    checkAccounts.push_back(CheckingAccount {"Kirk"});
    checkAccounts.push_back(CheckingAccount {"Spock" , 2000});
    checkAccounts.push_back(CheckingAccount {"Bones" , 5000});

    display(checkAccounts);
    deposit(checkAccounts , 1000);
    withdraw(checkAccounts , 2000);
    //===============================================

    // Trust Accounts
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount {});
    trustAccounts.push_back(TrustAccount {"Athos" , 10000 , 5.0});
    trustAccounts.push_back(TrustAccount {"Porthos" , 20000 , 4.0});
    trustAccounts.push_back(TrustAccount {"Aramis" , 30000});

    display(trustAccounts);
    deposit(trustAccounts , 1000);
    withdraw(trustAccounts , 3000);
    //===============================================

    // withdraw 5 times from each trust account
    // all withdraws should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i = 0 ; i <= 5 ; i++) {

        withdraw(trustAccounts , 1000);

    }

    getch();
    return 0;

}
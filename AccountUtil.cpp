#include <iostream>
#include "AccountUtil.h"

using namespace std;

// utility helper functions for Account class

// display Account objects in a vector of Account objects
void display(const vector<Account> &accounts) {

    cout << "\n================== Accounts ==================" << endl;
    for (const auto &acc : accounts) {

        cout << acc << endl;

    }

}

// deposit supplied amount to each Account object in the vector
void deposit(vector<Account> &accounts, double amount) {

    cout << "\n=========== Depositing to Accounts ===========" << endl;
    for (auto &acc : accounts) {

        if (acc.deposit(amount)) {

            cout << "Deposited " << amount << " to " << acc << endl;

        } else {

            cout << "Failed deposit of " << amount << " to " << acc << endl;

        }

    }

}

// withdraw amount from each Account object in the vector
void withdraw(vector<Account> &accounts, double amount) {

    cout << "\n========== Withdrawing from Accounts ==========" << endl;
    for (auto &acc : accounts) {

        if (acc.withdraw(amount)) {

            cout << "Withdrew " << amount << " from " << acc << endl;

        } else {

            cout << "Failed withdraw of " << amount << " to " << acc << endl;

        }

    }

}

// utility helper functions for Savings Account class

// display Savings Account objects in a vector of Savings Account objects
void display(const vector<SavingsAccount> &accounts) {

    cout << "\n=============== Savings Accounts ===============" << endl;
    for (const auto &acc : accounts) {

        cout << acc << endl;

    }

}

// deposit supplied amount to each Savings Account object in the vector
void deposit(vector<SavingsAccount> &accounts, double amount) {

    cout << "\n======== Depositing to Savings Accounts ========" << endl;
    for (auto &acc : accounts) {

        if (acc.deposit(amount)) {

            cout << "Deposited " << amount << " to " << acc << endl;

        } else {

            cout << "Failed deposit of " << amount << " to " << acc << endl;

        }

    }

}

// withdraw amount from each Savings Account object in the vector
void withdraw(vector<SavingsAccount> &accounts, double amount) {

    cout << "\n====== Withdrawing from Savings Accounts ======" << endl;
    for (auto &acc : accounts) {

        if (acc.withdraw(amount)) {

            cout << "Withdrew " << amount << " from " << acc << endl;

        } else {

            cout << "Failed withdraw of " << amount << " to " << acc << endl;

        }

    }

}

// utility helper functions for Checking Account class

// display Savings Account objects in a vector of Savings Account objects
void display(const vector<CheckingAccount> &accounts) {

    cout << "\n=============== Checking Accounts ===============" << endl;
    for (const auto &acc : accounts) {

        cout << acc << endl;

    }

}

// deposit supplied amount to each Savings Account object in the vector
void deposit(vector<CheckingAccount> &accounts, double amount) {

    cout << "\n======== Depositing to Checking Accounts ========" << endl;
    for (auto &acc : accounts) {

        if (acc.deposit(amount)) {

            cout << "Deposited " << amount << " to " << acc << endl;

        } else {

            cout << "Failed deposit of " << amount << " to " << acc << endl;

        }

    }

}

// withdraw amount from each Savings Account object in the vector
void withdraw(vector<CheckingAccount> &accounts, double amount) {

    cout << "\n====== Withdrawing from Checking Accounts ======" << endl;
    for (auto &acc : accounts) {

        if (acc.withdraw(amount)) {

            cout << "Withdrew " << amount << " from " << acc << endl;

        } else {

            cout << "Failed withdraw of " << amount << " to " << acc << endl;

        }

    }

}

// utility helper functions for Trust Account class

// display Savings Account objects in a vector of Savings Account objects
void display(const vector<TrustAccount> &accounts) {

    cout << "\n=============== Trust Accounts ===============" << endl;
    for (const auto &acc : accounts) {

        cout << acc << endl;

    }

}

// deposit supplied amount to each Savings Account object in the vector
void deposit(vector<TrustAccount> &accounts, double amount) {

    cout << "\n======== Depositing to Trust Accounts ========" << endl;
    for (auto &acc : accounts) {

        if (acc.deposit(amount)) {

            cout << "Deposited " << amount << " to " << acc << endl;

        } else {

            cout << "Failed deposit of " << amount << " to " << acc << endl;

        }

    }

}

// withdraw amount from each Savings Account object in the vector
void withdraw(vector<TrustAccount> &accounts, double amount) {

    cout << "\n====== Withdrawing from Trust Accounts ======" << endl;
    for (auto &acc : accounts) {

        if (acc.withdraw(amount)) {

            cout << "Withdrew " << amount << " from " << acc << endl;

        } else {

            cout << "Failed withdraw of " << amount << " to " << acc << endl;

        }

    }

}
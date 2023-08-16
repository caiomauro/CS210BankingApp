#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <iomanip>

class BankAccount {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // Constructor to initialize the account with user input
    BankAccount();

    // Function to calculate year-end balances and earned interest without additional monthly deposits
    void calculateYearEndBalanceWithoutDeposit();

    // Function to calculate year-end balances and earned interest with additional monthly deposits
    void calculateYearEndBalanceWithDeposit();
};

#endif

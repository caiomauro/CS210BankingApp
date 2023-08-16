#include "BankAccount.h"

// Constructor to initialize the account with user input
BankAccount::BankAccount() {
    std::cout << "Airgead Banking App" << std::endl;
    std::cout << "Enter Initial Investment Amount: $";
    std::cin >> initialInvestment;
    std::cout << "Enter Monthly Deposit Amount: $";
    std::cin >> monthlyDeposit;
    std::cout << "Enter Annual Interest Rate (%): ";
    std::cin >> annualInterest;
    std::cout << "Enter Number of Years: ";
    std::cin >> numYears;
}

// Function to calculate year-end balances and earned interest without additional monthly deposits
void BankAccount::calculateYearEndBalanceWithoutDeposit() {
    std::cout << "\nYear | Year-End Balance | Year-End Earned Interest" << std::endl;
    double totalBalanceNoDeposit = initialInvestment;
    double earnedInterestNoDeposit = 0;
    for (int year = 1; year <= numYears; ++year) {
        double annualInterestAmountNoDeposit = totalBalanceNoDeposit * (annualInterest / 100);
        totalBalanceNoDeposit += annualInterestAmountNoDeposit;
        earnedInterestNoDeposit += annualInterestAmountNoDeposit;
        std::cout << std::setw(4) << year << " | $" << std::setw(17) << std::fixed << std::setprecision(2) << totalBalanceNoDeposit << " | $" << std::setw(21) << std::fixed << std::setprecision(2) << earnedInterestNoDeposit << std::endl;
    }
}

// Function to calculate year-end balances and earned interest with additional monthly deposits
void BankAccount::calculateYearEndBalanceWithDeposit() {
    std::cout << "\nYear | Year-End Balance | Year-End Earned Interest" << std::endl;
    double totalBalanceWithDeposit = initialInvestment;
    double earnedInterestWithDeposit = 0;
    for (int year = 1; year <= numYears; ++year) {
        for (int month = 1; month <= 12; ++month) {
            double monthlyInterestAmount = (totalBalanceWithDeposit + monthlyDeposit) * ((annualInterest / 100) / 12);
            totalBalanceWithDeposit += monthlyDeposit + monthlyInterestAmount;
            earnedInterestWithDeposit += monthlyInterestAmount;
        }
        std::cout << std::setw(4) << year << " | $" << std::setw(17) << std::fixed << std::setprecision(2) << totalBalanceWithDeposit << " | $" << std::setw(21) << std::fixed << std::setprecision(2) << earnedInterestWithDeposit << std::endl;
    }
}

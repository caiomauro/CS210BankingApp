#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount account; // Create a BankAccount object
    account.calculateYearEndBalanceWithoutDeposit(); // Display year-end balances without additional deposits
    account.calculateYearEndBalanceWithDeposit(); // Display year-end balances with additional deposits

    char userChoice;
    do {
        std::cout << "\nDo you want to test different scenarios? (Y/N): ";
        std::cin >> userChoice;
        if (userChoice == 'Y' || userChoice == 'y') {
            account = BankAccount(); // Reset the account object for new scenarios
            account.calculateYearEndBalanceWithoutDeposit(); // Display year-end balances without additional deposits
            account.calculateYearEndBalanceWithDeposit(); // Display year-end balances with additional deposits
        }
    } while (userChoice == 'Y' || userChoice == 'y');

    std::cout << "\nThank you for using Airgead Banking App." << std::endl;

    return 0;
}



#include <iostream>
#include <ctime>
#include "SavingsAccount.h"

using namespace std;

int main() {
    const int ACCOUNT_COUNT = 100;
    SavingsAccount accounts[ACCOUNT_COUNT];

    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    // Edit information for the first two accounts
    for (int i = 0; i < 2; i++) {
        cout << "Editing information for account " << (i + 1) << endl;
        EditInformationByKeyboard(accounts[i]);
    }

    // Generate random information for the remaining accounts
    for (int i = 2; i < ACCOUNT_COUNT; i++) {
        generateInformationIntoRandom(accounts[i]);
    }

    // Show interest for all accounts
    ShowInterestAll(accounts, ACCOUNT_COUNT);

    // Show all accounts alphabetically
    ShowAllAlphabetically(accounts, ACCOUNT_COUNT);

    return 0;
}

// SavingsAccount.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "SavingsAccount.h"

using namespace std;

// Constructor
SavingsAccount::SavingsAccount() : annualInterestRate(0), currentBalance(0), minimumBalance(0) {}

// Getters
string SavingsAccount::getAccountName() const { return accountName; }
string SavingsAccount::getAccountHolderName() const { return accountHolderName; }
string SavingsAccount::getAddress() const { return address; }
double SavingsAccount::getAnnualInterestRate() const { return annualInterestRate; }
double SavingsAccount::getCurrentBalance() const { return currentBalance; }

// Setters
void SavingsAccount::setAccountName(const string& name) { accountName = name; }
void SavingsAccount::setAccountHolderName(const string& holderName) { accountHolderName = holderName; }
void SavingsAccount::setAddress(const string& addr) { address = addr; }
void SavingsAccount::setAnnualInterestRate(double rate) { annualInterestRate = rate; }
void SavingsAccount::setCurrentBalance(double balance) { currentBalance = balance; }

// Deposit function
void SavingsAccount::deposit(double amount) {
    if (amount > 0) {
        currentBalance += amount;
        if (currentBalance < minimumBalance) {
            minimumBalance = currentBalance; // Update minimum balance if necessary
        }
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

// Withdrawal function
void SavingsAccount::withdraw(double amount) {
    if (amount > 0 && amount <= currentBalance) {
        currentBalance -= amount;
    } else {
        cout << "Invalid withdrawal amount." << endl;
    }
}

// Calculate interest
double SavingsAccount::calculateInterest(int periodInMonths) const {
    return (minimumBalance * (annualInterestRate / 100) / 12) * periodInMonths;
}

// Disburse interest
void SavingsAccount::disburseInterest(int periodInMonths) {
    double interest = calculateInterest(periodInMonths);
    deposit(interest); // Deposit interest
    minimumBalance = currentBalance; // Reset minimum balance
}

// Function to edit information from keyboard
void EditInformationByKeyboard(SavingsAccount& account) {
    string name, holderName, addr;

    cout << "Enter Account Name: ";
    getline(cin, name);
    account.setAccountName(name);

    cout << "Enter Account Holder Name: ";
    getline(cin, holderName);
    account.setAccountHolderName(holderName);

    cout << "Enter Address (5 words, separated by spaces): ";
    getline(cin, addr);
    account.setAddress(addr);

    double rate;
    cout << "Enter Annual Interest Rate (2% to 5%): ";
    cin >> rate;
    account.setAnnualInterestRate(rate);

    double balance;
    cout << "Enter Current Balance (1000 to 50000): ";
    cin >> balance;
    account.setCurrentBalance(balance);
    cin.ignore(); // Clear the input buffer
}

// Function to generate random information
void generateInformationIntoRandom(SavingsAccount& account) {
    string names[10] = {"Iqura", "Maisha", "Saeera", "Safa", "Mushfirat", "Ahona", "Juhana", "Aurthi", "Mormo", "Nabiha"};
    string addressParts[10] = {"Dhaka", "Street", "Block", "House", "Uttara", "Gulshan", "Banani", "Dhanmondi", "Mirpur", "Farmgate"};

    // Generate random account name
    string n = names[rand() % 10] + " " + names[rand() % 10];

    // Generate random address
    string randomAddress = addressParts[rand() % 10] + " " +
                           addressParts[rand() % 10] + " " +
                           addressParts[rand() % 10] + " " +
                           addressParts[rand() % 10] + " " +
                           addressParts[rand() % 10];

    // Generate random annual interest rate between 2.0% to 5.0%
    double randomRate = 2.0 + (rand() % 31) * 0.1;

    // Generate random balance between 1000 and 50000
    double randomBalance = 1000 + rand() % 49001;

    // Set the generated values
    account.setAccountName(n);
    account.setAddress(randomAddress);
    account.setCurrentBalance(randomBalance);
    account.setAnnualInterestRate(randomRate);
}

// Function to show interest of all accounts
void ShowInterestAll(SavingsAccount ar[], int size) {
    char confirm;
    cout << "Do you want to disburse interest? (y/n): ";
    cin >> confirm;

    if (confirm == 'y' || confirm == 'Y') {
        for (int i = 0; i < size; i++) {
            double interest = ar[i].calculateInterest(1); // Calculate interest for 1 month
            cout << "Account: " << ar[i].getAccountName() << ", Interest: " << interest << endl;
            ar[i].disburseInterest(1); // Disburse the interest
        }
    } else {
        cout << "Interest not disbursed." << endl;
    }
}

// Function to show all accounts alphabetically
void ShowAllAlphabetically(SavingsAccount ar[], int size) {
    // Sort accounts based on account name
    sort(ar, ar + size, [](const SavingsAccount& a, const SavingsAccount& b) {
        return a.getAccountName() < b.getAccountName();
    });

    cout << "Accounts sorted alphabetically:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Account Name: " << ar[i].getAccountName()
             << ", Current Balance: " << ar[i].getCurrentBalance() << endl;
    }
}

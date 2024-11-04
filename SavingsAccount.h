// SavingsAccount.h

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include <string>
#include <iostream>

using namespace std;

class SavingsAccount {
private:
    string accountName;
    string accountHolderName;
    string address;
    double annualInterestRate; // Yearly interest rate in percentage
    double currentBalance;
    double minimumBalance; // To track the minimum balance for interest calculation

public:
    // Constructor
    SavingsAccount();

    // Getters
    string getAccountName() const;
    string getAccountHolderName() const;
    string getAddress() const;
    double getAnnualInterestRate() const;
    double getCurrentBalance() const;

    // Setters
    void setAccountName(const string& name);
    void setAccountHolderName(const string& holderName);
    void setAddress(const string& addr);
    void setAnnualInterestRate(double rate);
    void setCurrentBalance(double balance);

    // Deposit function
    void deposit(double amount);

    // Withdrawal function
    void withdraw(double amount);

    // Calculate interest
    double calculateInterest(int periodInMonths) const;

    // Disburse interest
    void disburseInterest(int periodInMonths);
};

// Function prototypes
void EditInformationByKeyboard(SavingsAccount& account);
void generateInformationIntoRandom(SavingsAccount& account);
void ShowInterestAll(SavingsAccount ar[], int size);
void ShowAllAlphabetically(SavingsAccount ar[], int size);

#endif // SAVINGS_ACCOUNT_H

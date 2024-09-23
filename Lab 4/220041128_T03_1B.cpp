#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
private:
    int acc_num;
    char acc_name[25];
    char type[25];
    float balance;
    const float min_balance = 1000;
    static int count;
    static int x;
    static float total_tax;

public:
    BankAccount(int num, const char name[], const char acc_type[], float b) //for some reason it shows garbage value if I try to assign them directly
    {
        acc_num = num;
        strcpy(acc_name, name);
        strcpy(type, acc_type);
        balance = b;
        count++;
        x++;
    }

    ~BankAccount()
    {
        x--;
        cout << "Account of  " << acc_name << " with account no " << acc_num
             << " is destroyed with a balance  " << balance << endl;
    }

    static int getTotalAccounts()
    {
        return count;
    }

    static int getActiveAccounts()
    {
        return x;
    }

    static float getTotalTax()
    {
        return total_tax;
    }

    float getBalance() const
    {
        return balance;
    }

    void showInfo() 
    {
        cout << "Account Number: " << acc_num << endl;
        cout << "Account Holder Name: " << acc_name << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance:  " << balance << endl;
    }

    void showBalance() 
    {
        cout << "Balance:  " << balance << endl;
    }

    void deposit(float amount)
    {
        if (amount >= 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    void withdrawal(float amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (balance - amount < min_balance)
        {
            cout << "Withdrawal not possible" << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    void giveInterest()
    {
        float interest = balance * 0.3;
        float tax = interest * 0.1;
        interest -= tax;
        balance += interest;
        total_tax += tax;
    }
};

int BankAccount::count = 0;
int BankAccount::x = 0;
float BankAccount::total_tax = 0;

void display_stat()
{
    cout << "Total BankAccount objects created: " << BankAccount::getTotalAccounts() << endl;
    cout << "BankAccount objects currently active: " << BankAccount::getActiveAccounts() << endl;
    cout << "Total source tax collected: BDT " << BankAccount::getTotalTax() << endl;
}

BankAccount Larger(const BankAccount A, const BankAccount B)
{
    if (A.getBalance() > B.getBalance())
        return A;
    else
        return B;
}

int main()
{
    BankAccount b1(1234, "Roza", "Savings", 5000);
    BankAccount b2(5678, "Safa", "Current", 8000);

    b1.showInfo();
    b1.deposit(2000);
    b1.withdrawal(1000);
    b1.giveInterest();
    b1.showBalance();

    b2.showInfo();
    b2.deposit(3000);
    b2.withdrawal(500);
    b2.giveInterest();
    b2.showBalance();

    BankAccount larger_acc = Larger(b1, b2);
    cout << "Account with larger balance:" << endl;
    larger_acc.showInfo();

    display_stat();

    return 0;
}

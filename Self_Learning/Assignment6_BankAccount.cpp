#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int no, string name, double bal)
    {
        accountNumber = no;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b(101, "Vivek", 10000);

    b.display();

    b.deposit(5000);
    cout << "\nAfter Deposit\n";
    b.display();

    b.withdraw(3000);
    cout << "\nAfter Withdraw\n";
    b.display();

    return 0;
}

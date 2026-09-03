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
        if(amount < 0)
            throw amount;

        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if(amount < 0)
            throw amount;

        if(amount > balance)
            throw string("Insufficient Balance");

        balance = balance - amount;
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

    try
    {
        double amount;

        cout << "Enter deposit amount: ";
        cin >> amount;

        b.deposit(amount);

        cout << "Enter withdraw amount: ";
        cin >> amount;

        b.withdraw(amount);

        b.display();
    }
    catch(double amount)
    {
        cout << "Invalid Amount: " << amount << endl;
    }
    catch(string msg)
    {
        cout << msg << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " is credited to your account." << endl;
        }
        else
        {
            throw "amount should be greater than zero";
        }
    }
    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " is debited from your account." << endl;
        }
        else if (amount < 0)
        {
            throw "amount cannot be negative.";
        }
        else
        {
            throw "Invalid withdrawal amount.";
        }
    }
};
int main()
{

    Customer C1("John", 1000, 12);
    try
    {
        C1.deposit(500);
        C1.withdraw(2000);
    }
    catch (const char *e)
    {
        cout << "Exception Occurred: " << e << endl;
    }
}
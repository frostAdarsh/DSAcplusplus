#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }
    static void accStatic()
    {
        cout << "Total number of customer " << total_customer << endl;
        cout << "Total Balance in bank " << total_balance << endl;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
    Customer A1("Rohit", 23, 1000);
    Customer A2("Rahul", 45, 2000);
    A1.display();
    A2.display();
    Customer::accStatic();
    A1.deposit(500);
    Customer::accStatic();
}
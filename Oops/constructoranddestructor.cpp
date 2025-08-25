#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    int *roi;

public:
    // default Constructor
    Customer()
    {
        // cout<<"Default Constructor Called"<<endl;
        name = "Rohit";
        account_number = 50;
        balance = 1000;
        roi = new int[100];// space in heap
    }

    // Parameterized Constructor
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // Constructor Overloading
    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        balance = 0;
    }

    // Inline Constructor
    // inline Customer(string name, int account_number) : name(name), account_number(account_number), balance(0)
    // {
    // }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main()
{

    Customer A1;
    Customer A2("Rohit", 23, 1000);
    Customer A3("Rahul", 45);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3); // Copy Constructor
    A4.display();
    Customer A5 = A4; // Copy Constructor
    A5.display();
}
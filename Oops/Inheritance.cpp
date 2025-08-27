#include <iostream>
using namespace std;

class Human
{
    string color;

protected:
    string name;
    int age, weight;
};

class Student : private Human
{
private:
    int roll_number, fees;

public:
    Student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    void display()
    {
        cout << name << endl;
        cout << age << endl;
        cout << weight << endl;
        cout << roll_number << endl;
        cout << fees << endl;
    }
};
int main()
{
    Student A("John", 20, 70, 101, 5000);
    A.display();
}

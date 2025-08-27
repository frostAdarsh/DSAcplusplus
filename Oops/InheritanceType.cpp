#include <iostream>
using namespace std;

//--------------Single Inheritance

// class Human
// {
//   protected:
//   string name;
//   int age;

//   public:
//   void work(){
//     cout<<"I am working"<<endl;
//   }

// };

// class Student:public Human
// {
//     private:
//     int roll_number,fees;

//     public:
//     Student(string name, int age, int roll_number, int fees){
//         this->name=name;
//         this->age=age;
//         this->roll_number=roll_number;
//         this->fees=fees;
//     }
//     void displayInfo(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Roll Number: "<<roll_number<<endl;
//         cout<<"Fees: "<<fees<<endl;
//     }

// };

// int main(){
//     Student A("John",20,101,5000);
//     A.displayInfo();
//     A.work();

// }

//------------------Multileve Inheritance

// class Person
// {
// protected:
//     string name;

// public:
//     void introduce()
//     {
//         cout << "Hello my name is: " << name << endl;
//     }
// };

// class Employee : public Person
// {
// protected:
//     int salary;

// public:
//     void monthly_salary()
//     {
//         cout << "My monthly salary is: " << salary << endl;
//     }
// };

// class Manager : public Employee
// {
// public:
//     string department;

//     Manager(string name, int salary, string department)
//     {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work()
//     {
//         cout << "Managing the " << department << " department." << endl;
//     }
// };

// int main()
// {
//     Manager m("Alice", 75000, "Sales");
//     m.introduce();
//     m.monthly_salary();
//     m.work();
// }

//------------------------ Multiple Inheritance

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "Working as an engineer in " << specialization << " specialization." << endl;
    }
};

class Youtuber
{
public:
    int subscribers;

    void contentCreator()
    {
        cout << "Creating content for " << subscribers << " subscribers." << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;

    CodeTeacher(int subscribers, string specialization, string name)
    {
        this->subscribers = subscribers;
        this->specialization = specialization;
        this->name = name;
    }
    void showcase(){
        cout << "I am " << name << endl;
        work();
        contentCreator();
    }
};
int main()
{
    CodeTeacher ct(1000, "Computer Science", "John Doe");
    ct.showcase();
    return 0;
}

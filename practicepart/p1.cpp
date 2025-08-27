// #include <iostream>

// using namespace std;

// class Date
// {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     Date()
//     {
//         day = 1;
//         month = 1;
//         year = 2000;
//     }

//     Date(int day, int month, int year)
//     {
//         this->day = day;
//         this->month = month;
//         this->year = year;

//     }

//     void displayDate()
//     {
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// int main()
// {
//     Date d1;
//     Date d2(12, 8, 2023);
//     d1.displayDate();
//     d2.displayDate();
// }

//-------------------------------------------------------------------

// #include <iostream>

// using namespace std;

// class Date
// {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     Date()
//     {

//         day = 1;
//         month = 1;
//         year = 2003;
//     }

//     Date(int day, int month, int year)
//     {

//         this->day = day;
//         this->month = month;
//         this->year = year;
//     }

//     void acceptDate()
//     {
//         cout << "Enter day: ";
//         cin >> day;
//         cout << "Enter month: ";
//         cin >> month;
//         cout << "Enter year: ";
//         cin >> year;
//     }

//     void displayDate()
//     {
//         cout << "Date: " << day << "/" << month << "/" << year << endl;
//     }
// };

// class Employee
// {
// private:
//     int id;
//     string name;
//     Date dob;

// public:
//     Employee()
//     {
//         id = 0;
//         name = "not set";
//         dob = Date();
//     }
//     Employee(int id, string name, Date dob)
//     {

//         this->id = id;
//         this->name = name;
//         this->dob = dob;
//     }

//     void acceptEmployeeInfo()
//     {
//         cout << "Enter Employee ID: ";
//         cin >> id;
//         cout << "Enter Employee Name: ";
//         cin >> name;
//         cout << "Enter Date of Birth:" << endl;
//         dob.acceptDate();
//     }

//     void displayEmployeeInfo()
//     {
//         cout << "Employee ID: " << id << endl;
//         cout << "Employee Name: " << name << endl;
//         cout << "Date of Birth: ";
//         dob.displayDate();
//     }
// };
// int main()
// {

//     Employee emp1;
//     emp1.displayEmployeeInfo();

//     return 0;
// }

//--------------------------------------------------------------

// #include <iostream>

// using namespace std;

// class Employee
// {

// private:
//     int id;
//     string name;
//     int salary;
//     int HRA = salary * 0.5;
//     double Medical = 1000;

//     double Pf = salary * 0.12;
//     double PT = 200;
//     double Gross_Salary = salary + HRA + Medical; 
//     double Netsalary = 

// };

// int main()
// {
// }

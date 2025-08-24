#include <iostream>
using namespace std;

//---------------------------------------------------------

// Basic class example-------------------------------------

// class Student
// {
// public:
//     string name;
//     int age, roll_number;
//     string grade;
// };
// int main()
// {
//     Student S1;
//     S1.name = "Rohit";
//     S1.age = 10;
//     S1.roll_number = 21;
//     S1.grade = "A";

//     cout << S1.roll_number << " ";

//     Student S2;
//     S2.name = "Aditi";
//     S2.age = 12;
//     S2.roll_number = 22;
//     S2.grade = "B";

//     cout << S2.roll_number << " ";
// }

//----------------------------------------------------------------
//----------Function Getter and Setter

// class Student
// {

//     string name;
//     int age, roll_number;
//     string grade;
//     public:
//     void setname(string s){
//         if(s.size()==0){
//             cout<<"Invalid Name ";
//             return;
//         }
//         name = s;
//     }
//     void setage(int a){

//         if(a<0|| a>100){
//             cout<<"Invalid Age ";
//             return;
//         }
//         age = a;
//     }
//     void setrollnumber(int r){
//         roll_number = r;
//     }
//     void setgrade(string g){
//         grade = g;
//     }

//     void getname(){
//         cout << name << endl;
//     }
//     void getage(){
//         cout << age << endl;
//     }
//     void getrollnumber(){
//         cout << roll_number << endl;
//     }
//     void getgrade(){
//         cout << grade << endl;
//     }
//     int getroll_number(){
//         return roll_number;
//     }
//     string get_grade(int pin){
//         if(pin==123){
//             return grade;
//         }
//         else{
//             return "Invalid PIN";
//         }
//     }
// };
// int main()
// {
//     Student S1;
//     S1.setname("");
//     S1.setage(10);
//     S1.setrollnumber(21);
//     S1.setgrade("A");
//     S1.getname();
//     S1.getage();

//     cout<<S1.getroll_number()<<endl;
//     cout<<S1.get_grade(123)<<endl;

// }

//-------------------------------------------------------
//-----------------Dynamic Memory Allocation
class Student
{
public:
    string name;
    int age, roll_number;
    string grade;
};

int main(){
    Student *S = new Student;
    (*S).name = "Rohit";
    (*S).age = 10;
    (*S).roll_number = 21;
    (*S).grade = "A";


    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll_number<<endl;
    cout<<S->grade<<endl;

}
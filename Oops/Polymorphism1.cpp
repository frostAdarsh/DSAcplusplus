#include <iostream>
using namespace std;
// operator overloading
class Complex
{
    int real, img;

public:

   Complex(){
    
   }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " +i" << img << endl;
    }

    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{
    Complex c1(4, 5);
    Complex c2(5, 8);
    c1.display();
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
};
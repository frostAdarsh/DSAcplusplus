#include <iostream>
using namespace std;

class Greek
{
public:
    // function overloading
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    // function overloading
    void add(float a, float b)
    {
        cout << a + b << endl;
    }
};

#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real,
                       imag + obj.imag);
    }
};

int main()
{
    Greek a1;
    a1.add(2, 3);
    a1.add(2.3f, 5.6f);
    Complex c1(10, 5), c2(2, 4);

    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;
    cout << c3.real << " + i" << c3.imag;
    return 0;
}
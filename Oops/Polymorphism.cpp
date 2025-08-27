//polymorphism->compile time->function overloading or operator overloading
//            ->runtime->Virtual functions

#include <iostream>
using namespace std;

class Area
{

public:
// function overloading
    int calculateArea(int r)
    {
        return 3.14 * r * r;
    }

    int calculateArea(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area A1, A2;
    cout << A1.calculateArea(5) << endl;
    cout << A2.calculateArea(4, 6) << endl;
}

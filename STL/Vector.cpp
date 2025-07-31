#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity of vector v: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity of vector v after adding one element: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity of vector v after adding another element: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity of vector v after adding a third element: " << v.capacity() << endl;
    cout << "size of vector v: " << v.size() << endl;
    cout << "Element at 2nd index: " << v.at(2) << endl;

    cout << "front element: " << v.front() << endl;
    cout << "back element: " << v.back() << endl;
    cout << "Is vector empty? " << v.empty() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
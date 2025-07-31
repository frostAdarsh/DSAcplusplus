#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "One";
    m[3] = "Three";
    m[2] = "Two";

    m.insert({4, "Four"});

    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << "Size of map: " << m.size() << endl;

    m.erase(2); // Erase key 2

    cout << "After erasing key 2:" << endl;
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << "-------------------------" << endl;

    cout << "Checking if key 3 exists:" << endl;
    if (m.count(3) == 0)
    {
        cout << "No such key found" << endl;
    }
    else
    {
        cout << "Key found" << endl;
    }

    auto it = m.find(3); // Find key 3

    for (auto i = it; i != m.end(); ++i)
    {
        cout << i->first << " : " << i->second << endl;
    }

    return 0;
}
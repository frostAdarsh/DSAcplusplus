#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout<<"-5 is present: "<<s.count(-5)<<endl;

    set<int>::iterator it1 = s.find(5);
   
    if (it1 != s.end())
    {
        cout << "Element found: " << *it1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
    
}
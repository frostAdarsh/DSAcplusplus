#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);

    cout<<"Finding 7->"<<binary_search(v.begin(), v.end(), 7)<<"\n";

    int a = 5;
    int b = 3;
    cout<<"Max of 5 and 3->"<<max(a, b)<<"\n";
    cout<<"Min of 5 and 3->"<<min(a, b)<<"\n";

    swap(a, b);
    cout<<"After swapping, a: "<<a<<" b: "<<b<<"\n";
}
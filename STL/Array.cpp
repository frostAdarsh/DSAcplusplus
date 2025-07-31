#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[5] = {1, 2, 3, 4, 5};
    array<int, 5> arr = {1, 2, 3, 4, 5};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }

    cout << "Element at index 2: " << arr.at(2) << endl;
    cout << "Front element: " << arr.front() << endl;
    cout << "Back element: " << arr.back() << endl;
    cout << "Is array empty? " << arr.empty() << endl;
    cout << "Max size of array: " << arr.max_size() << endl;
}
// Binary_Search_Question/Question_on_occurance.cpp
// This code finds the first occurrence of a key in a sorted array using binary search.
// It also finds the last occurrence of the key in the same array.
//It also finds the total occurrence of the key in the same array.
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid; // Found the key, but continue searching to the left
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return ans; // Return the first occurrence index
}
int LastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid; // Found the key, but continue searching to the Right
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return ans; // Return the last occurrence index
}


int main()
{
    int even[5] = {1, 2, 3, 3, 5};
    cout << "First occurrence of 3 is at index: " << firstOcc(even, 5, 3) << endl;
    cout << "Last occurrence of 3 is at index: " << LastOcc(even, 5, 3) << endl;
    cout << "total occurrence of 3 is: " << LastOcc(even, 5, 3) - firstOcc(even, 5, 3) + 1 << endl;
    return 0;
}
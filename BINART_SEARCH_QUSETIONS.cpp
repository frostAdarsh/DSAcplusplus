#include <iostream>

using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 4, 4, 4, 5, 6, 7, 8, 8, 8, 9, 9, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x, start = 0, end = n - 1, first = -1, last = -1, mid;
//     cout << "Enter the number to search: ";
//     cin >> x;
//     // Binary search to find the first occurrence of x
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == x)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     // If first occurrence is found, search for the last occurrence
//     start = 0;
//     end = n - 1;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == x)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     cout << "First occurrence of " << x << " is at index: " << first << endl;
//     cout << "Last occurrence of " << x << " is at index: " << last << endl;
// }

// -----------find position of missing number
// int main()
// {

//     int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x, start = 0, end = n - 1, ans = n, mid;
//     cout << "Enter the number to search: ";
//     cin >> x;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == x)
//         {
//             ans = mid;
//             break;
//         }
//         else if (arr[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {   ans = mid;
//             end = mid - 1;
//         }
//     }

//     cout << ans << endl;
// }

// -----------find sqrt of a number

int main()
{
    int x;
    int start = 0, end = x, mid, ans;
    cout << "Enter the number: ";
    cin >> x;
    if (x < 2)
    {
        cout << "Square root of " << x << " is: " << x << endl;
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == x / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Square root of " << x << " is: " << ans << endl;
}
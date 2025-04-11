#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1, 2};
    // for(int i = 0; i < 5; i++){
    //     cout << arr[i] << " ";
    // }
    // return 0;

    // int size;
    // cin>>size;
    // int arr[1000];
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5] = {1, 2, 3, 4, 5};
    // cout <<sizeof(arr)/sizeof(arr[0])<<endl;

    //--------- min value in array
    // int arr[] = {41, 22, 33, 14, 45, 46, 78};
    // int ans = INT8_MAX;
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     if(arr[i] < ans){
    //         ans = arr[i];
    //     }
    // }
    // cout << "Minimum value in the array is: " << ans << endl;

    //---------- max value in array
    // int arr[] = {41, 22, 33, 14, 45, 46, 78};
    // int ans = INT8_MIN;
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     if(arr[i] > ans){
    //         ans = arr[i];
    //     }
    // }
    // cout << "Maximum value in the array is: " << ans << endl;

    //---------Search in array

    // int arr[] = {41, 22, 33, 14, 45, 46, 78};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x;
    // cout << "Enter the element to search: ";
    // cin >> x;

    // for(int i = 0; i < n; i++) {
    //     if(arr[i] == x) {
    //         cout << "Element found at index: " << i << endl;
    //         return 0;
    //     }
    // }

    // cout << "Element not found" << endl;
    // return -1;

    //---------Reverse an array

    // int arr[] = {1, 2, 3, 4, 5};
    // int start = 0;
    // int end = sizeof(arr)/sizeof(arr[0]) - 1;

    // while(start<end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    //     cout<<arr[i]<<" ";
    // }

    //------------Second largest element in array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    int second = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans)
        {
            second = max(second, arr[i]);
        }
    }
    cout << "The second largest element is: " << second << endl;
    return 0;
}

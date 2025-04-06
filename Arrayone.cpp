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

    // min value in array
    // int arr[] = {41, 22, 33, 14, 45, 46, 78};
    // int ans = INT8_MAX;
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    //     if(arr[i] < ans){
    //         ans = arr[i];
    //     }
    // }
    // cout << "Minimum value in the array is: " << ans << endl;
    
    // max value in array
    int arr[] = {41, 22, 33, 14, 45, 46, 78};
    int ans = INT8_MIN;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout << "Maximum value in the array is: " << ans << endl;


    return 0;
}

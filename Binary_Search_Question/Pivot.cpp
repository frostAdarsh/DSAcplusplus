#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
    int start = 0, end = n - 1;
    while(start<end){
        int mid = start + (end - start) / 2;

        if(arr[mid]>= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int arr[] = {3,8,9,10,17,2};
    cout << "Pivot is at index: " << getPivot(arr, 6) << endl;
    return 0;
}
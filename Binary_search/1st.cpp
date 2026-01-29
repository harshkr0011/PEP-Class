#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size -1;

    while (start <= end){
        int mid = (start+end)/2;

        if (arr[mid] == key) return mid;

        else if(arr[mid] < key) start = mid+1;

        else end = mid -1;
    }

    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;
    int key;

    cout << "Enter key to search: ";
    cin >> key;

    int result = binarySearch(arr, key, size);

    if (result != -1)
        cout << "Key found at index " << result;
    else
        cout << "Key not found";

    return 0;
}
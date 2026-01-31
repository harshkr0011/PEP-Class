#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return false;

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return true;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, right, key);
    else
        return binarySearch(arr, left, mid - 1, key);
}

int main() {
    int n = 10;
    int arr[n] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (binarySearch(arr, 0, n - 1, key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}

// find the key in array by linear search, if the key is found and the value of
// key > 5, than return the double value of key otherwise return the half value of key

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { 
            if (key > 5)
                return key * 2;
            else
                return key / 2;
        }
    }
    return -1; 
}


int main(){
    int arr[5] = {3, 1, 6, 4, 2};
    int key;

    cout << "Enter key: ";
    cin >> key;

    int result = linearSearch(arr, 5, key);

    if (result != -1)
        cout << "Result: " << result;
    else
        cout << "Key not found";

    return 0;
}



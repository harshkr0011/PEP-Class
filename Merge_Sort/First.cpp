#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end) {

    int mid = (start + end) / 2;

    // Find the length of left splitted array, adding 1 because while calculating index
    // we subtracted 1, now to find size we are adding 1
    int length1 = mid - start + 1;

    // Find the length of right splitted array
    int length2 = end - mid;

    // Creating two new arrays to store left and right parts
    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    // Copy value from start -> mid in first array
    int k = start;
    for (int i = 0; i < length1; i++) {
        arr1[i] = arr[k++];
    }

    // Copy values from mid+1 till the end in second array
    k = mid + 1;
    for (int i = 0; i < length2; i++) {
        arr2[i] = arr[k++];
    }

    // After the values are copied, now we sort and merge two arrays
    int i = 0;      // pointer for first array
    int j = 0;      // pointer for second array
    k = start;      // pointer for original array

    // Compare elements from both arrays and place the smaller one in original array
    while (i < length1 && j < length2) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    // Need to check the remaining elements of first array
    while (i < length1) {
        arr[k++] = arr1[i++];
    }

    // Need to check the remaining elements of second array
    while (j < length2) {
        arr[k++] = arr2[j++];
    }

    // Free dynamically allocated memory
    delete [] arr1;
    delete [] arr2;
}

void mergeSort(int arr[], int start, int end) {

    // Base case: if array has one or no element, it is already sorted
    if (start >= end) return;

    // Find mid to divide the array into two halves
    int mid = (start + end) / 2;

    // Recursively sort left half
    mergeSort(arr, start, mid);

    // Recursively sort right half
    mergeSort(arr, mid + 1, end);

    // Merge the two sorted halves
    merge(arr, start, end);
}

int main() {

    int arr[] = {2, 5, 1, 6, 7, 3, 10};
    int n = 7;

    // Call merge sort on the entire array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end) {

    // find pivot (first element)
    int pivot = arr[start];

    // counting how many elements are less than or equal to the pivot
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // after counting we get to know about the right place of pivot,
    // now we will create a pivot index at that position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // now we will handle the right and left part
    // such that all elements on left of pivot are smaller
    // and all elements on right of pivot are greater
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {

        // move i forward until we find an element greater than pivot
        while (arr[i] <= pivot) {
            i++;
        }

        // move j backward until we find an element smaller than pivot
        while (arr[j] > pivot) {
            j--;
        }

        // if both pointers are at wrong positions, swap them
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // finally return the pivot index
    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {

    // base case: if array has 0 or 1 element
    if (start >= end)
        return;

    // partition the array and get pivot position
    int p = partition(arr, start, end);

    // recursively sort left part
    quickSort(arr, start, p - 1);

    // recursively sort right part
    quickSort(arr, p + 1, end);
}

int main() {

    int arr[] = {4, 5, 2, 7, 3, 8};
    int n = 6;

    // call quick sort
    quickSort(arr, 0, n - 1);

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include "merge-sort.h"

int size = 10;
int sorted[10]; // set sorted array **globally

int main() {
    int size = 10;
    int arr[size] = {15, 2, 77, 8, 12071, 2, 1, 411412, 19292, 1151232131};
    
    mergeSort(arr, size);
    printResult(arr, size);
    return 1;
}

void mergeSort(int* arr, int l, int r) {
    mergeSort(arr, l, r/2); // divide left half
    mergeSort(arr, (l + r)/2, r);
    merge(arr, l, r, (l + r)/2);
}

void merge(int* arr, int l, int r, int mid) {
    int m = mid + 1; // set right side array starting index
    int i = l; // set index for inserting sorted value
    while (l < m && m <= r) {
        if (arr[l] < arr[m]) {
            arr[i] = arr[l]; // insert lower value
            l++;
            i++;
        }

        else if (arr[m] < arr[l]) {
            arr[i] = arr[m]; // insert lower value
            m++;
            i++;
        }
    }

    // set remaining value
    if (l < m) {
        while (l < m) {
            arr[i] = arr[l];
            l++;
            i++;
        }
    }

    else if (m <= r) {
        while (m <= r) {
            arr[i] = arr[m];
            m++;
            i++;
        }
    }
}
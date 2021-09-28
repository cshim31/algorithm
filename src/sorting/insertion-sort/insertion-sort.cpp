#include "insertion-sort.h"

int main() {
    int size = 10;
    int arr[size] = {15, 2, 77, 8, 12071, 2, 1, 411412, 19292, 1151232131};
    
    insertionSort(arr, size);
    printResult(arr, size);
    return 1;
}

void insertionSort(int* arr, int size) {
    int swap; // save value for swap

    for (int i = 0; i < size; i++) {
        for (int j = i; j > 0; j--) {
            // insert value
            if (arr[j - 1] > arr[j]) {
                swap = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = swap;
            }

            else {
                break;
            }
        }
    }
}
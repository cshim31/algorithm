#include "insertion-sort.h"

int main() {
    int size = 10;
    int arr[size] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    insertionSort(arr, size);
    printResult(arr, size);
    return 0;
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

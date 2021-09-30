#include "bubble-sort.h"

int main() {
    int size = 10;
    int arr[size] = {15, 2, 77, 8, 12071, 2, 1, 411412, 19292, 1151232131};
    
    bubbleSort(arr, size);
    printResult(arr, size);
    return 0;
}

void bubbleSort(int* arr, int size) {
    int swap; // store value for swap
    for(int i = 0; i < size; i++) {
        for(int j = 1; j < size - i; j++) { // limit j range to size - i as biggest value is pushed to end at every cycle
            // swap
            if(arr[j-1] > arr[j]) {
                swap = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = swap;
            }
        }
    }
}



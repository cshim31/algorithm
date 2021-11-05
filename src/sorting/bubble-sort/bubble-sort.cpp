#include "bubble-sort.h"

int main() {
    int size = 10;
    int arr[size] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
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
                swap(arr, j-1, j);
            }
        }
    }
}



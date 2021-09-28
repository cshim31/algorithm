#include "selection-sort.h"

int main() {
    int size = 10;
    int arr[size] = {15, 2, 77, 8, 12071, 2, 1, 411412, 19292, 1151232131};
    
    selectionSort(arr, size);
    printResult(arr, size);
    return 1;
}

void selectionSort(int* arr, int size) {
    int swap; // store value for swap
    int lowest; // store lowset value
    int position; // store index for lowest value

    for (int i = 0; i < size; i++) {
        lowest  = INT_MAX; // set infinity
        for (int j = i; j < size; j++) { 
            if(arr[j] < lowest) {
                position = j;
                lowest = arr[j];
            } 
        }

        // save lowest to left  
        swap = arr[i];
        arr[i] = lowest;
        arr[position] = swap;
    }
}
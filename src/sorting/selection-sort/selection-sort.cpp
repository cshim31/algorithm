#include "selection-sort.h"

int main() {
    int size = 10;
    int arr[size] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    selectionSort(arr, size);
    printResult(arr, size);
    return 0;
}

void selectionSort(int* arr, int size) {
    int swap; // store value for swap
    int lowest; // store value for lowest 
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
        swap(arr, i, position);
    }
}

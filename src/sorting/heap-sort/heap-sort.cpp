#include "heap-sort.h"

int main() {
    int size = 10;
    int arr[size] = {10, 26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
    
    heapSort(arr, size);
    printResult(arr, size);
    return 0;
}

void heapSort(int* arr, int size) {
    heapify(arr, size);

    int root = 0;
    int temp;

    for(int i = size - 1; i > 0; i--) {
        swap(arr, i, root);
        heapify(arr, i);
    }
}

// bottom-up : going from bottom to top
void heapify(int* arr, int size) {
    for(int i = 1; i < size; i++) {
        int root =  (i - 1) / 2;
        int child = i;
        // greater values goes to child
        do {
            if(arr[root] < arr[child]) swap(arr, root, child);
            
            child = root;
            root = (child - 1) / 2;
        } while(child > 0);
    }
}


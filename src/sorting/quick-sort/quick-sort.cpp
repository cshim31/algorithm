#include "quick-sort.h"

int main() {
    int size = 10;
    int arr[size] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    quickSort(arr, size, 0, size - 1);
    printResult(arr, size);
    return 0;
}

void quickSort(int* arr, int size, int start, int end) {
    if (start > end) return;
    int i = start;
    int j = end;

    while (i < j) {
        // find value greater than value at beginning
        // from left to right
        while (arr[start] >= arr[i] && i < end) {
            i++;
        }

        // find value smaller than value at beginnning
        // from right to left
        while (arr[start] < arr[j] && j > start) {
            j--;
        }

        // check whether index crosses
        if (i >= j) {
            swap(arr, start, j);
        }

        else {
            swap(arr, i, j);
        }
    }
    quickSort(arr, size, start, j - 1);
    quickSort(arr, size, j + 1, end);

    return ;
}


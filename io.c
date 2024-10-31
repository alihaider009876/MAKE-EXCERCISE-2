#include <stdio.h>
#include "io.h"

// Increment each element of the array by 1 and sort in ascending order
void increment_and_sort_array(int arr[], int size) {
    // Increment each element
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
    // Sort the array in ascending order (simple bubble sort)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


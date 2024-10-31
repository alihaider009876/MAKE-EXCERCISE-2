#include "math.h"

// Calculate the product of elements in an array
int product_of_array(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}


#include <stdio.h>
#include "math/src/math.h"
#include "io/src/io.h"
#include "utils/src/utils.h"
#ifdef EXTRA
#include "extra/src/extra.h"
#endif

int main() {
    int arr[5];
    int size = 5;

    // Get array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Increment each element by one and display in ascending order
    increment_and_sort_array(arr, size);
    printf("Array with each element incremented by 1 and sorted:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Compute the product of array elements
    int product = product_of_array(arr, size);
    printf("Product of array elements: %d\n", product);

    // If EXTRA=1, prompt user for a sentence and count vowel frequency
    #ifdef EXTRA
    char sentence[100];
    printf("Enter a sentence to count vowel frequencies: ");
    scanf(" %[^\n]", sentence);  // Read a line of input including spaces
    count_vowel_frequency(sentence);
    #endif

    return 0;
}


#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

void find_max_min(int arr[], int size, int *max, int *min) {
    if (size <= 0) {
        // Handle case of empty array
        printf("Array size must be greater than 0.\n");
        return;
    }

    // Initialize max and min
    *max = INT_MIN;
    *min = INT_MAX;

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int array[] = {1, 4, 3, 8, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int max, min;

    find_max_min(array, size, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}


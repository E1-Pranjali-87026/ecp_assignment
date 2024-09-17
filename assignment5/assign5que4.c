#include <stdio.h>


int findMax(int arr[], int size);
int findMin(int arr[], int size);
void inputArray(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int size;

    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];  

    printf("Enter %d elements:\n", size);
    inputArray(arr, size);

    printf("Array elements:\n");
    printArray(arr, size);

    
    int max = findMax(arr, size);
    int min = findMin(arr, size);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}


int findMax(int arr[], int size) {
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int findMin(int arr[], int size) {
    int min = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


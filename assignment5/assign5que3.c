#include <stdio.h>


void reverseArray(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int size;

    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("Original array:\n");
    printArray(arr, size);

  
    reverseArray(arr, size);

  
    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}


void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


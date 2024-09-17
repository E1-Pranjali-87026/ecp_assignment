#include <stdio.h>

#define SIZE 5


void inputArray(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int marks[SIZE];

    printf("Enter %d marks:\n", SIZE);
    inputArray(marks, SIZE);
    
   
    printf("The entered marks are:\n");
    printArray(marks, SIZE);

    return 0;
}


void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}


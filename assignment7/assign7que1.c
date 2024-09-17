#include <stdio.h>


void acceptArray(int rows, int cols, int array[rows][cols]);
void printArray(int rows, int cols, int array[rows][cols]);

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    int array[rows][cols];

    
    acceptArray(rows, cols, array);

    
    printArray(rows, cols, array);

    return 0;
}


void acceptArray(int rows, int cols, int array[rows][cols]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printArray(int rows, int cols, int array[rows][cols]) {
    printf("The 2-D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}


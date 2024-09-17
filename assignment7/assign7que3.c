#include <stdio.h>

#define ROWS 3
#define COLS 3


int sumOfRow(int array[ROWS][COLS], int row);
int sumOfColumn(int array[ROWS][COLS], int col);

int main() {
    int array[ROWS][COLS];
    int rowSum, colSum;
    int rowIndex, colIndex;

    
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    printf("Enter the row index to calculate sum (0 to %d): ", ROWS - 1);
    scanf("%d", &rowIndex);
    if (rowIndex >= 0 && rowIndex < ROWS) {
        rowSum = sumOfRow(array, rowIndex);
        printf("Sum of elements in row %d: %d\n", rowIndex, rowSum);
    } else {
        printf("Invalid row index.\n");
    }

    printf("Enter the column index to calculate sum (0 to %d): ", COLS - 1);
    scanf("%d", &colIndex);
    if (colIndex >= 0 && colIndex < COLS) {
        colSum = sumOfColumn(array, colIndex);
        printf("Sum of elements in column %d: %d\n", colIndex, colSum);
    } else {
        printf("Invalid column index.\n");
    }

    return 0;
}


int sumOfRow(int array[ROWS][COLS], int row) {
    int sum = 0;
    for (int j = 0; j < COLS; j++) {
        sum += array[row][j];
    }
    return sum;
}

int sumOfColumn(int array[ROWS][COLS], int col) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += array[i][col];
    }
    return sum;
}


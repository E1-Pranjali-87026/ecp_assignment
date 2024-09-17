#include <stdio.h>

#define SIZE 3

// Function prototypes
void inputMatrix(int matrix[SIZE][SIZE]);
void printMatrix(int matrix[SIZE][SIZE]);
void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]);
void subtractMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]);
void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]);

int main() {
    int matrixA[SIZE][SIZE];
    int matrixB[SIZE][SIZE];
    int result[SIZE][SIZE];

    // Input first matrix
    printf("Enter elements of Matrix A:\n");
    inputMatrix(matrixA);

    // Input second matrix
    printf("Enter elements of Matrix B:\n");
    inputMatrix(matrixB);

    // Addition
    addMatrices(matrixA, matrixB, result);
    printf("Matrix A + Matrix B:\n");
    printMatrix(result);

    // Subtraction
    subtractMatrices(matrixA, matrixB, result);
    printf("Matrix A - Matrix B:\n");
    printMatrix(result);

    // Multiplication
    multiplyMatrices(matrixA, matrixB, result);
    printf("Matrix A * Matrix B:\n");
    printMatrix(result);

    return 0;
}

// Function to input elements of a matrix
void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


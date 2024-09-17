#include <stdio.h>

#define SUBJECTS 10

void inputMarks(int marks[], int size);
void calculateTotalAndAverage(int marks[], int size, float *total, float *average);

int main() {
    int marks[SUBJECTS];
    float total = 0.0, average = 0.0;

  
    inputMarks(marks, SUBJECTS);
    
   
    calculateTotalAndAverage(marks, SUBJECTS, &total, &average);
    
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

void inputMarks(int marks[], int size) {
    printf("Enter marks for %d subjects:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

void calculateTotalAndAverage(int marks[], int size, float *total, float *average) {
    *total = 0;
    for (int i = 0; i < size; i++) {
        *total += marks[i];
    }
    *average = *total / size;
}


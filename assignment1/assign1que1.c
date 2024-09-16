#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform the calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}


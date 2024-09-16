#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Print the number as a character, decimal, octal, and hexadecimal
    printf("Character representation: %c\n", number);
    printf("Decimal representation: %d\n", number);
    printf("Octal representation: %o\n", number);
    printf("Hexadecimal representation: %X\n", number);

    return 0;
}


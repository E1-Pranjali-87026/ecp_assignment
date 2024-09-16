#include <stdio.h>

int main() {
    char character;
    int asciiValue;

    printf("Enter a character: ");
    scanf(" %c", &character); 

    asciiValue = (int)character;

    printf("ASCII value of '%c':\n", character);
    printf("Decimal representation: %d\n", asciiValue);
    printf("Hexadecimal representation: %X\n", asciiValue);
    printf("Octal representation: %o\n", asciiValue);

    printf("Enter an ASCII value: ");
    scanf("%d", &asciiValue);

    printf("Character for ASCII value %d: '%c'\n", asciiValue, (char)asciiValue);

    return 0;
}


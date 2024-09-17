#include <stdio.h>

void displayFaceValue(int number) {
    
    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int units = number % 10;
    
    
    printf("Face value of each decimal digit:\n");
    printf("%d\n", thousands);
    printf("%d\n", hundreds);
    printf("%d\n", tens);
    printf("%d\n", units);
}

void displayPlaceValue(int number) {
    
    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int units = number % 10;
    
    // Calculate place values
    int placeValueThousands = thousands * 1000;
    int placeValueHundreds = hundreds * 100;
    int placeValueTens = tens * 10;
    int placeValueUnits = units;
    
    printf("Place value of each decimal digit:\n");
    printf("%d000 + %d00 + %d0 + %d\n", thousands, hundreds, tens, units);
}

void displayReverseOrder(int number) {
    // Extract each digit
    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int units = number % 10;
    
    // Calculate the reversed number
    int reversedNumber = units * 1000 + tens * 100 + hundreds * 10 + thousands;
    
    // Display the reversed number
    printf("Number in reverse order by changing decimal place values:\n");
    printf("%d\n", reversedNumber);
}

int main() {
    int number;
    
    // Input a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
   
    if (number < 1000 || number > 9999) {
        printf("Error: The number must be a 4-digit number.\n");
        return 1; // Exit the program with an error code
    }

   
    displayFaceValue(number);
    displayPlaceValue(number);
    displayReverseOrder(number);
    
    return 0;
}


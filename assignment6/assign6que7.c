#include <stdio.h>
#include <string.h>


void decimal_to_roman(int num, char *result);
int roman_to_decimal(const char *roman);

int main() {
    int number;
    char roman[100];
    
    
    printf("Enter an integer for Roman conversion: ");
    scanf("%d", &number);
    
    if (number < 1 || number > 3999) {
        printf("Number out of range. Please enter a number between 1 and 3999.\n");
        return 1;
    }
    
    decimal_to_roman(number, roman);
    printf("Roman numeral: %s\n", roman);

    
    printf("Enter a Roman numeral for decimal conversion: ");
    scanf("%s", roman);

    int decimal = roman_to_decimal(roman);
    if (decimal == -1) {
        printf("Invalid Roman numeral.\n");
    } else {
        printf("Decimal number: %d\n", decimal);
    }
    
    return 0;
}


void decimal_to_roman(int num, char *result) 
{
    
    const char *roman_numerals[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int values[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    result[0] = '\0'; 

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            num -= values[i];
            strcat(result, roman_numerals[i]);
        }
    }
}


int roman_to_decimal(const char *roman) {
    
    const char *roman_numerals[] =
   	{
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int values[] =
   	{
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    int length = strlen(roman);
    int decimal = 0;
    int i = 0;

    while (i < length)
   	{
        bool matched = false ;

        for (int j = 0; j < 13; j++)
	   	{
            int len = strlen(roman_numerals[j]);
            if (strncmp(roman + i, roman_numerals[j], len) == 0)
		   	{
                decimal += values[j];
                i += len;
                matched = true ;
                break;
            }
        }

        if (!matched)
	   	{
            return -1; 
        }
    }

    return decimal;
}


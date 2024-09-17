#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void my_itoa(int num, int base, char *str);

int main() 
{
    char buffer[100];
    int number, base;
    
   
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the base (2, 8, 10, 16): ");
    scanf("%d", &base);

   
    if (base < 2 || base > 16) {
        printf("Base must be between 2 and 16.\n");
        return 1;
    }

    
    my_itoa(number, base, buffer);

    
    printf("Number in base %d: %s\n", base, buffer);
    
    return 0;
}


void my_itoa(int num, int base, char *str) {
    static char digits[] = "0123456789ABCDEF";
    char temp[32];
    int i = 0, j, sign;

    
    if (num == 0)
   	{
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    
    if (num < 0 && base == 10)
   	{
        sign = -1;
        num = -num;
    } else {
        sign = 1;
    }

    while (num != 0)
   	{
        temp[i++] = digits[num % base];
        num /= base;
    }

   
    if (sign == -1)
   	{
        temp[i++] = '-';
    }

   
    for (j = 0; j < i; j++)
   	{
        str[j] = temp[i - j - 1];
    }
    str[i] = '\0';
}


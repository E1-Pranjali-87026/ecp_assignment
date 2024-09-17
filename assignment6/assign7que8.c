#include <stdio.h>
#include <string.h>


void number_to_words(int num, char *words);

void convert_less_than_thousand(int num, char *words);
void convert_less_than_hundred(int num, char *words);
void convert_two_digits(int num, char *words);

const char* ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
const char* teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
const char* tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
const char* thousands[] = { "", "Thousand", "Million", "Billion" };

int main() {
    int number;
    char words[256];

    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0 || number > 999999999) {
        printf("Number out of range. Please enter a number between 0 and 999,999,999.\n");
        return 1;
    }

 
    number_to_words(number, words);

  
    printf("Number in words: %s\n", words);
    
    return 0;
}


void number_to_words(int num, char *words) {
    if (num == 0) {
        strcpy(words, "Zero");
        return;
    }

    words[0] = '\0'; 
    int thousand_index = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            char part[256];
            convert_less_than_thousand(num % 1000, part);
            if (thousand_index > 0) {
                strcat(part, " ");
                strcat(part, thousands[thousand_index]);
            }
            if (strlen(words) > 0)
		   	{
                strcat(part, " ");
                strcat(words, part);
            } else {
                strcpy(words, part);
            }
        }
        num /= 1000;
        thousand_index++;
    }

    
    
    void reverse_string(char *str) {
        int len = strlen(str);
        for (int i = 0; i < len / 2; i++)
	   	{
            char temp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = temp;
        }
    }

    reverse_string(words);
}


void convert_less_than_thousand(int num, char *words) {
    if (num >= 100) {
        int hundreds = num / 100;
        strcat(words, ones[hundreds]);
        strcat(words, " Hundred");
        num %= 100;
        if (num > 0)
	   	{
            strcat(words, " ");
        }
    }
    if (num >= 20)
   	{
        convert_two_digits(num, words);
    } else if (num >= 10) {
        strcat(words, teens[num - 10]);
    } else if (num > 0) {
        strcat(words, ones[num]);
    }
}


void convert_two_digits(int num, char *words) {
    strcat(words, tens[num / 10]);
    if (num % 10 > 0) {
        strcat(words, " ");
        strcat(words, ones[num % 10]);
    }
}


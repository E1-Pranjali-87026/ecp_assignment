#include <stdio.h>
#include <stdbool.h>


bool is_char_in_string(const char *str, char ch);
void remove_chars(const char *string1, char *string2);

int main()
{
    char string1[100];
    char string2[100];
    
    
    printf("Enter the characters to remove (string1): ");
    fgets(string1, sizeof(string1), stdin);

    
    size_t len1 = strlen(string1);
    if (len1 > 0 && string1[len1 - 1] == '\n') {
        string1[len1 - 1] = '\0';
    }

    
    printf("Enter the string (string2): ");
    fgets(string2, sizeof(string2), stdin);

    
    size_t len2 = strlen(string2);
    if (len2 > 0 && string2[len2 - 1] == '\n') 
	{
        string2[len2 - 1] = '\0';
    }

    
    remove_chars(string1, string2);

 
    printf("Modified string: %s\n", string2);
    
    return 0;
}


bool is_char_in_string(const char *str, char ch) {
    while (*str) {
        if (*str == ch)
	   	{
            return true;
        }
        str++;
    }
    return false;
}

void remove_chars(const char *string1, char *string2) {
    char *src = string2;   
    char *dst = string2;   
    
    while (*src) 
	{
        
        if (!is_char_in_string(string1, *src)) 
		{
            *dst++ = *src;
        }
        src++;
    }
    
    *dst = '\0';
}


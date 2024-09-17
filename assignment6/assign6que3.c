#include <stdio.h>
void remove_char(char *str, char ch);

int main()
{
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
   	{
        str[len - 1] = '\0';
    }

   
    printf("Enter the character to remove: ");
    ch = getchar();
    
   
    remove_char(str, ch);

    
    printf("Modified string: %s\n", str);
    
    return 0;
}


void remove_char(char *str, char ch) {
    char *src = str;     
    char *dst = str;     
    
    while (*src) 
	{
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    
    *dst = '\0';
}


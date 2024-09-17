#include <stdio.h>
#include <ctype.h>


int my_atoi(const char *string);

int main() {
    char str[100];
    
    
    printf("Enter a string of digits: ");
    fgets(str, sizeof(str), stdin);

   
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
   	{
        str[len - 1] = '\0';
    }


    int result = my_atoi(str);

    
    printf("Numeric equivalent: %d\n", result);
    
    return 0;
}


int my_atoi(const char *string) {
    int result = 0; 
    int sign = 1;      
    const char *p = string;

   
    if (*p == '-') 
	{
        sign = -1;
        p++;
    } else if (*p == '+') 
	{
        p++;
    }

    
    while (*p)
   	{
        if (!isdigit(*p)) 
		{
            
            return 0; 
     }
        result = result * 10 + (*p - '0');
        p++;
    }

    return sign * result;
}


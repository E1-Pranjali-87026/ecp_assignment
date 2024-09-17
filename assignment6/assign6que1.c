#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char str1[100] = "Hello, World!";
    char str2[100] = "Hello, C Programming!";
    char str3[100] = "Hello";
    char str4[100] = "World!";
    char str5[100];
    char str6[100];
    char str7[100] = "Hello, Hello, Hello!";
    char str8[] = "Hello, World!";

  
    printf("Length of str1: %zu\n", strlen(str1));

   
    strcpy(str5, str1);
    printf("Copy of str1 to str5: %s\n", str5);

    strcat(str1, str4);
    printf("Concatenation of str1 and str4: %s\n", str1);


    int cmp_result = strcmp(str1, str2);
    printf("Comparison result of str1 and str2: %d\n", cmp_result);

    #ifdef _WIN32
    int icmp_result = stricmp(str1, str2);
    #else
    int icmp_result = strcasecmp(str1, str2);
    #endif
    printf("Case-insensitive comparison result of str1 and str2: %d\n", icmp_result);

 
    strncpy(str6, str2, 5);
    str6[5] = '\0'; 
    printf("Copy of first 5 characters of str2 to str6: %s\n", str6);

 
    strncat(str1, str3, 3);
    printf("Concatenation of first 3 characters of str3 to str1: %s\n", str1);

  
    char *strrev(char *str) {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
        return str;
    }
    printf("Reversed str7: %s\n", strrev(str7));

    char *ptr = strchr(str8, 'W');
    if (ptr) {
        printf("First occurrence of 'W' in str8: %s\n", ptr);
    }

    char *substr = strstr(str8, "World");
    if (substr) {
        printf("First occurrence of 'World' in str8: %s\n", substr);
    }

    cmp_result = strncmp(str1, str2, 5);
    printf("Comparison result of first 5 characters of str1 and str2: %d\n", cmp_result);

    char str9[] = "This is a test";
    char *token = strtok(str9, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}


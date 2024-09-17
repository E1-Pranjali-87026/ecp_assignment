#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

size_t my_strlen(const char* str);
char* my_strcpy(char *dest, const char *src);
char* my_strcat(char *dest, const char *src);
int my_strcmp(const char *str1, const char *str2);
int my_stricmp(const char *str1, const char *str2);
char* my_strrev(char* str);
char* my_strchr(const char *str, int ch);
char* my_strstr(const char *str, const char *substr);

int main() {
    
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "lo";
    
    printf("strlen(\"%s\") = %zu\n", str1, my_strlen(str1));
    
    my_strcpy(str2, str1);
    printf("strcpy: %s\n", str2);
    
    my_strcat(str1, " World");
    printf("strcat: %s\n", str1);
    
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str2, my_strcmp(str1, str2));
    
    printf("stricmp(\"%s\", \"%s\") = %d\n", "hello", "HELLO", my_stricmp("hello", "HELLO"));
    
    printf("strrev(\"%s\") = %s\n", str1, my_strrev(str1));
    
    printf("strchr(\"%s\", 'l') = %s\n", str1, my_strchr(str1, 'l'));
    
    printf("strstr(\"%s\", \"%s\") = %s\n", str1, str3, my_strstr(str1, str3));
    
    return 0;
}



size_t my_strlen(const char* str) {
    const char* s = str;
    while (*s) ++s;
    return (size_t)(s - str);
}

char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while ((*ptr++ = *src++)) {
        
    }
    return dest;
}

char* my_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*ptr) ++ptr;  
    while ((*ptr++ = *src++)) {
        
    }
    return dest;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        ++str1;
        ++str2;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int my_stricmp(const char *str1, const char *str2) {
    while (tolower(*str1) == tolower(*str2)) {
        if (*str1 == '\0') return 0;
        ++str1;
        ++str2;
    }
    return tolower(*(unsigned char*)str1) - tolower(*(unsigned char*)str2);
}

char* my_strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;
    
 
    while (*end) ++end;
    --end;
    
    
    while (start < end)
   	{
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return str;
}

char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) return (char*)str;
        ++str;
    }
    return NULL;
}

char* my_strstr(const char *str, const char *substr) {
    if (!*substr) return (char*)str;
    
    const char *p1;
    const char *p2;
    const char *p1_adv = str;
    
    while (*p1_adv) {
        p1 = p1_adv;
        p2 = substr;
        
        while (*p1 && *p2 && *p1 == *p2) {
            ++p1;
            ++p2;
        }
        
        if (!*p2) return (char*)p1_adv;
        
        ++p1_adv;
    }
    return NULL;
}


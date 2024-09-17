#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50


void acceptNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("Enter names of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        
        names[i][strcspn(names[i], "\n")] = '\0';
    }
}
void printNames(const char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("\nStudent Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}


void sortNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];

    
    acceptNames(names);

    
    printf("\nBefore Sorting:\n");
    printNames(names);

    
    sortNames(names);

    // Print names after sorting
    printf("\nAfter Sorting:\n");
    printNames(names);

    return 0;
}


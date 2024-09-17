#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

int main() {
    
    struct Student student;

    
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    
    
    getchar(); 

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    
    size_t length = strlen(student.name);
    if (length > 0 && student.name[length - 1] == '\n') {
        student.name[length - 1] = '\0';
    }

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print the student information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}


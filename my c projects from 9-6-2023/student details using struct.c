#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
};

int main() {
    struct Student student; 

    printf("Enter student name: ");
    scanf("%s", &student.name);
    printf("Enter student roll number: ");
    scanf("%d", &student.rollNumber);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);

    return 0;
}
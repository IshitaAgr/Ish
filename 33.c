#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int numStudents;
    printf("Enter the number of students in the database: ");
    scanf("%d", &numStudents);
    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\nDetails of all students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}

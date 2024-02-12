// Program to implement an array of structures for student marks for each student and pass it to function for various
// operations

#include <stdio.h>

// Structure to store student details
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming there are 5 subjects
};

// Function to perform operations for one student
void performOperations(struct Student student) {
    int i;
    float totalMarks = 0, averageMarks;

    // Calculate total marks
    for (i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }

    // Calculate average marks
    averageMarks = totalMarks / 5;

    // Display student details and calculated results
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);

    printf("\nSubject-wise Marks:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student.marks[i]);
    }

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
}

int main() {
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structures
    struct Student students[numStudents];

    // Input details and marks for each student
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Perform operations for each student
    for (i = 0; i < numStudents; i++) {
        performOperations(students[i]);
    }

    return 0;
}
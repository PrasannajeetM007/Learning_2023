#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float physicsMarks;
    float mathMarks;
    float chemistryMarks;
} Student;

void printSummary(Student student)
{
    float totalMarks = student.physicsMarks + student.mathMarks + student.chemistryMarks;
    float percentage = (totalMarks / 300.0) * 100.0;

    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.physicsMarks);
    printf("Maths Marks: %.2f\n", student.mathMarks);
    printf("Chemistry Marks: %.2f\n", student.chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main()
{
    Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter Marks for Physics: ");
    scanf("%f", &student.physicsMarks);

    printf("Enter Marks for Math: ");
    scanf("%f", &student.mathMarks);

    printf("Enter Marks for Chemistry: ");
    scanf("%f", &student.chemistryMarks);

    printf("\n---Summary---\n");
    printSummary(student);

    return 0;
}

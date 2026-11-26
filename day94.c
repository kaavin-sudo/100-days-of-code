#include <stdio.h>

/* Enum for result */
enum Result
{
    FAIL,
    PASS
};

/* Student structure */
struct Student
{
    char name[50];
    int roll_no;
    float marks;
    enum Result result;
};

/* Function accepts structure as parameter */
void displayStudent(struct Student s)
{
    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    /* Print enum value */
    if(s.result == PASS)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }
}

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    /* Assign enum value */
    if(s.marks >= 40)
    {
        s.result = PASS;
    }
    else
    {
        s.result = FAIL;
    }

    /* Pass complete structure to function */
    displayStudent(s);

    return 0;
}

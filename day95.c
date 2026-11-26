#include <stdio.h>

/* Enum for student result */
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

/* Function returns the structure of the top student */
struct Student findTopStudent(struct Student students[], int n)
{
    int i;
    int highest = 0;

    for(i = 1; i < n; i++)
    {
        if(students[i].marks > students[highest].marks)
        {
            highest = i;
        }
    }

    /* Return complete structure */
    return students[highest];
}

int main()
{
    struct Student students[5];
    struct Student top;
    int i;

    /* Input details of 5 students */
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        /* Assign enum value */
        if(students[i].marks >= 40)
        {
            students[i].result = PASS;
        }
        else
        {
            students[i].result = FAIL;
        }
    }

    /* Function returns top student's structure */
    top = findTopStudent(students, 5);

    /* Print top student's details */
    printf("\nTop Student Details\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    if(top.result == PASS)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}

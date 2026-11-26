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

int main()
{
    struct Student students[5];
    int i;
    int highest = 0;

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

        /* Assign enum value based on marks */
        if(students[i].marks >= 40)
        {
            students[i].result = PASS;
        }
        else
        {
            students[i].result = FAIL;
        }
    }

    /* Find student with highest marks */
    for(i = 1; i < 5; i++)
    {
        if(students[i].marks > students[highest].marks)
        {
            highest = i;
        }
    }

    /* Print student with highest marks */
    printf("\nStudent with Highest Marks\n");

    printf("Name: %s\n", students[highest].name);
    printf("Roll Number: %d\n", students[highest].roll_no);
    printf("Marks: %.2f\n", students[highest].marks);

    /* Display enum result */
    if(students[highest].result == PASS)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}

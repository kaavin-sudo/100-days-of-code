#include <stdio.h>

/* Define enum for result */
enum Result
{
    FAIL,
    PASS
};

/* Define Student structure */
struct Student
{
    char name[50];
    int roll_no;
    float marks;
    enum Result result;
};

int main()
{
    struct Student s;

    /* Read student details */
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    /* Assign enum value according to marks */
    if(s.marks >= 40)
    {
        s.result = PASS;
    }
    else
    {
        s.result = FAIL;
    }

    /* Print student details */
    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    /* Print result using enum */
    if(s.result == PASS)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}

#include <stdio.h>

/* Define enum for gender */
enum Gender
{
    MALE = 1,
    FEMALE,
    OTHER
};

/* Define Student structure */
struct Student
{
    char name[50];
    int roll_no;
    float marks;
    enum Gender gender;
};

int main()
{
    struct Student students[5];
    int i, choice;

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

        printf("1. Male\n");
        printf("2. Female\n");
        printf("3. Other\n");
        printf("Enter gender: ");
        scanf("%d", &choice);

        students[i].gender = choice;
    }

    /* Print details of all students */
    printf("\n--- Student Details ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);

        /* Print gender using enum */
        switch(students[i].gender)
        {
            case MALE:
                printf("Gender: Male\n");
                break;

            case FEMALE:
                printf("Gender: Female\n");
                break;

            case OTHER:
                printf("Gender: Other\n");
                break;

            default:
                printf("Gender: Invalid\n");
        }
    }

    return 0;
}

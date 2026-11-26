#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    /* Take number of students */
    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Open file in write mode */
    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    /* Take student details and write them into the file */
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        /* Store record in file */
        fprintf(fp, "%s %d %.2f\n",
                s.name, s.roll, s.marks);
    }

    fclose(fp);

    /* Open the same file in read mode */
    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    /* Read records until end of file */
    while(fscanf(fp, "%s %d %f",
                 s.name, &s.roll, &s.marks) == 3)
    {
        printf("\nName: %s\n", s.name);
        printf("Roll Number: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}#include <stdio.h>

/* Create enumeration for days */
enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}

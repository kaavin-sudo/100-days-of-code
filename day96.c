#include <stdio.h>

/* Enum for employee type */
enum EmployeeType
{
    FULL_TIME = 1,
    PART_TIME,
    INTERN
};

/* Structure for joining date */
struct Date
{
    int day;
    int month;
    int year;
};

/* Employee structure containing Date structure */
struct Employee
{
    char name[50];
    int id;
    float salary;

    /* Nested structure */
    struct Date joiningDate;

    /* Enum member */
    enum EmployeeType type;
};

int main()
{
    struct Employee e;
    int choice;

    /* Input employee details */
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    /* Input joining date */
    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    /* Input employee type */
    printf("\n1. Full Time\n");
    printf("2. Part Time\n");
    printf("3. Intern\n");

    printf("Enter employee type: ");
    scanf("%d", &choice);

    e.type = choice;

    /* Print employee details */
    printf("\nEmployee Details\n");

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d/%02d/%d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    /* Print employee type using enum */
    switch(e.type)
    {
        case FULL_TIME:
            printf("Employee Type: Full Time\n");
            break;

        case PART_TIME:
            printf("Employee Type: Part Time\n");
            break;

        case INTERN:
            printf("Employee Type: Intern\n");
            break;

        default:
            printf("Employee Type: Invalid\n");
    }

    return 0;
}

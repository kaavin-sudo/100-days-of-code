#include <stdio.h>

/* Define enum for gender */
enum Gender
{
    MALE = 1,
    FEMALE,
    OTHER
};

/* Structure containing enum Gender */
struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("1. Male\n");
    printf("2. Female\n");
    printf("3. Other\n");

    printf("Enter gender: ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nName: %s\n", p.name);

    /* Print gender using enum value */
    switch(p.gender)
    {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;

        default:
            printf("Gender: Invalid");
    }

    return 0;
}

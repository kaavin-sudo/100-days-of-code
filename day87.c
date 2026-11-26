#include <stdio.h>

/* Enum for different user roles */
enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    /* Display message according to user role */
    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have standard access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
}

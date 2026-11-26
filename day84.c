#include <stdio.h>

/* Define enumeration for status */
enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    printf("0. SUCCESS\n");
    printf("1. FAILURE\n");
    printf("2. TIMEOUT\n");

    printf("Enter status value: ");
    scanf("%d", &choice);

    status = choice;

    /* Print message according to status */
    switch(status)
    {
        case SUCCESS:
            printf("Operation completed successfully.");
            break;

        case FAILURE:
            printf("Operation failed.");
            break;

        case TIMEOUT:
            printf("Operation timed out.");
            break;

        default:
            printf("Invalid status.");
    }

    return 0;
}

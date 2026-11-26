#include <stdio.h>

/* Enum for menu choices */
enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation choice;
    int option;
    int a, b;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    choice = option;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Perform operation using switch */
    switch(choice)
    {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

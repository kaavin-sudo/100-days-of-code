#include <stdio.h>

int main()
{
    int i, j;

    // Increasing: 1, 3, 5
    for(i = 1; i <= 5; i += 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    // Decreasing: 3, 1
    for(i = 3; i >= 1; i -= 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}




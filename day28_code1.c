#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    // Store numbers from 1 to n in array
    for(i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    // Check every element of the array
    for(i = 0; i < n; i++)
    {
        count = 0;

        if(a[i] > 1)
        {
            for(j = 1; j <= a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    count++;
                }
            }

            // Prime number has exactly 2 factors
            if(count == 2)
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}

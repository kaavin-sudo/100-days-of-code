#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    // Reading array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing array elements
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

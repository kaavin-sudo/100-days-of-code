#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position!");
        return 0;
    }

    // Shift elements one position to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = element;

    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

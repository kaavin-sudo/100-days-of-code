#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the element
    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            pos = i;
            break;
        }
    }

    // Check if element exists
    if(pos == -1)
    {
        printf("Element not found in the array.");
    }
    else
    {
        // Shift elements to the left
        for(i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

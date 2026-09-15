#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element, pos;//variable to store the position where the element will be inserted

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)// reading the array elements from the user 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position
    pos = n;// initializing the position to n, which is the end of the array

    for(i = 0; i < n; i++)// loop to find the appropriate the position to insert the new element in the sorted array
    {
        if(element < arr[i])// checking if the current element in the array is greater than the element to be inserted
        {
            pos = i;// updating the position to the current index if the current element is greater than the element to be inserted
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)// loop to shift the elements to the right to make space for the new element 
    {
        arr[i] = arr[i - 1];// shifting the elements to the right by one position 
    }

    // Insert the element
    arr[pos] = element;// inserting the new element at the appropriate position in the sorted array

    n++;

    printf("Array after insertion:\n");// printing the array after inserting the new element

    for(i = 0; i < n; i++)// loop to print the elements of the array after insertion
    {
        printf("%d ", arr[i]);// printing the elements of the array after insertion
    }

    return 0;
}

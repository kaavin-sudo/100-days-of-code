#include <stdio.h>

int main()
{
    int n, i, key;
    int low, high, mid;
    int found = 0;// Variable to indicate if the element is found

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);// promting the user to enter the elements of the array in a sorted order
    for(i = 0; i < n; i++)// reading the array elements from the user
    {
        scanf("%d", &arr[i]);// reading the array elements from the user
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;// initializing the low index to 0
    high = n - 1;// initializing the high index to n-1

    while(low <= high)// loop to perform the binary search until the low index is less than or equal to the high index
    {
        mid = (low + high) /2; // calculating the mid index point of the current search range

        if(arr[mid] == key)// checking if the element at the mid index is equal to the key
        {
            printf("%d found at position %d\n", key, mid + 1);
            found = 1;// setting the found variable to 1 to indicate that the element is found 
            break;
        }
        else if(arr[mid] < key)// checking if the mid element is less than the key, if so we need to search in the right half of the array
        {
            low = mid + 1;// updating the low index to mid + 1 to search in the right half of the array
        }
        else
        {
            high = mid - 1;// updating the high index to mid -1 to search in the left half of the array
        }
    }

    if(found == 0)// checking if the element is not found in the array
    {
        printf("%d not found in the array.\n", key);// printing the final message indicating that the element is not found in the array
    }

    return 0;
}

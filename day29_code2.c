#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int max, min;// Variables to store maximum and minimum values

    printf("Enter the number of elements: ");// accepting input from the user
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)// reading the array elements from the user
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is both maximum and minimum
    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++)// loop to find maximum and minimum elements in the array 
    {
        if(arr[i] > max)// checking if the current element is greater than the current maximum
        {
            max = arr[i];// updating the maximum value if the current element is greater
        }

        if(arr[i] < min)// checking if the current element is less than the current minimum
        {
            min = arr[i];// updating the minimum value if the current element is less
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

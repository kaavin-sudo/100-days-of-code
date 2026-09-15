#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, zero = 0;// Variables to store counts of positive, negative, and zero elements

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);  // Prompting the user to enter the elements of the array

    for(i = 0; i < n; i++)// reading the array elements from the user
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)// loop to count positive, negative, and zero elements in the array
    {
        if(arr[i] > 0)// checking if the current element is positive
        {
            positive++;
        }
        else if(arr[i] < 0)// checking if the current element is negative
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}

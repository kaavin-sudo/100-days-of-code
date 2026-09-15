#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, most;// Variables to store the digit with maximum frequency and its count

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    // Handle negative numbers
    if(n < 0)// checking if the number is negative
        n = -n;

    // Special case for 0
    if(n == 0)// checking if the number is zero
    {
        printf("Digit occurring most times = 0\n");
        return 0;
    }

    // Count frequency of each digit
    while(n > 0)//  loop to count the frequency of each digit in the number
    {
        digit = n % 10;// extracting the last digit of the number
        count[digit]++;// incrementing the count of the extracted digit
        n = n / 10;// removing the last digit from the number
    }

    // Find digit with maximum frequency
    for(i = 0; i < 10; i++)// loop to find the digit with the maximum frequency
    {
        if(count[i] > max)// checking if the current digit's count is greater than the current maximum count
        {
            max = count[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d\n", most);// printing the digit that occurs most frequently
    printf("Number of times = %d\n", max);// printing the number of times the most frequent digit occurs

    return 0;
}

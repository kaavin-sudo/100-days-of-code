//Write a program to reverse a given number.
#include <stdio.h>

int main()
 {
    int n, reverse = 0, remainder;// variable declaration

    scanf("%d", &n);

    while (n != 0) // applying the while loop
    {
        remainder = n % 10;// calculating the remainder
        reverse = reverse * 10 + remainder;// calculating the reverse of the number
        n = n / 10;
    }

    printf("%d", reverse);// printing the revrse

    return 0;
}
//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main()
 {
    int n, original, digit, reverse = 0;// declaring the variable

    printf("Enter a number: ");// accepting the input from. the user
    scanf("%d", &n);

    original = n;

    while (n != 0) // checking the while condition
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;// reversing the digit
        n = n / 10;
    }

    if (original == reverse)// checking the if condition
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}


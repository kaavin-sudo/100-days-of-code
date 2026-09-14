//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() 
{
    int n, i;//variable declaration
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) // applying for loop
    {
        factorial = factorial * i;// calculating the factorial
    }

    printf("%lld", factorial);// printing the factorial

    return 0;
}
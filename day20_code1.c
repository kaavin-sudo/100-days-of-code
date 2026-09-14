// wap to calculate the product of odd digits of a number

#include <stdio.h>

int main() {
    int num, digit;
    int product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;   // Handle negative numbers

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        num = num / 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

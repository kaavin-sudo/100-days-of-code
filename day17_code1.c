// wap to check whether a number is an armstrong number or not
#include <stdio.h>
 
int main() 
{
   int n, original, digit, sum = 0;// variable declaration
 
   printf("Enter a number: ");// accepting an input
   scanf("%d", &n);
 
   original = n;
 
   while (n != 0) // checking the while loop condition
   {
       digit = n % 10;// separating a digit
       sum = sum + digit * digit * digit;// calculating the sum
       n = n / 10;
   }
 
   if (sum == original)// checking the if condition
       printf("Armstrong Number\n");
   else
       printf("Not an Armstrong Number\n");
 
   return 0;
}
// wap to calculate the hcf/gcd of two numbers
#include <stdio.h>
 
int main() 
{
   int a, b, remainder;// variable decalaration
 
   printf("Enter two numbers: ");// accepting input from the user
   scanf("%d %d", &a, &b);
 
   while (b != 0) // applying the while condition
   {
       remainder = a % b;// calculating the remainder
       a = b;
       b = remainder;
   }
 
   printf("HCF = %d\n", a);
 
   return 0;
}
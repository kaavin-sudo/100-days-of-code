// wap to calculate the lcm of two numbers
#include <stdio.h>
 
int main() 
{
   int a, b, x, y, hcf, lcm;// variable declaaration
 
   printf("Enter two numbers: \n");// accepting input from the user
   scanf("%d %d", &a, &b);
 
   x = a;
   y = b;
 
   while (y != 0) // applying the while loop condition
   {
       int temp = y;
       y = x % y;
       x = temp;
   }
 
   hcf = x;
   lcm = (a * b) / hcf;// calculating the lcm
 
   printf("LCM = %d\n", lcm);
 
   return 0;
}
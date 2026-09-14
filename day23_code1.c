// wap to wrtie the sum of the series(2/3 + 4/7 + 6/11 + 8/15 + ...)

#include <stdio.h>
 
int main()
{
   int n, i;// number of terms and loop variable
   float sum = 0;
 
   printf("Enter number of terms: ");// prompt user for input
   scanf("%d", &n);
 
   for (i = 1; i <= n; i++) // loop to calculate the sum of the series
   {
       sum = sum + (float)(2 * i) / (4 * i - 1);// formula for the series
   }
 
   printf("Sum = %.2f\n", sum);// print the sum of the series
 
   return 0;
}
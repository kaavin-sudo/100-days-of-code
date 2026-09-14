/*wap to print the following number pattern with spaces
   5
  45
 345
2345
12345*/

#include <stdio.h>
 
int main() 
{
   int i, j;// variable declaration
 
   for (i = 1; i <= 5; i++) // outer loop for rows
   {
 
       for (j = 1; j <= 5 - i; j++)// inner loop for spaces
        {
           printf(" ");
       }
 
       for (j = 6 - i; j <= 5; j++)// inner loop for numbers
        {
           printf("%d", j);// print numbers
       }
 
       printf("\n");// new line after each row
   }
 
   return 0;
}
 
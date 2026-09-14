/*wap to print the series *****
*****
*****
*****
*****. */

#include <stdio.h>
 
int main()
 {
   int i, j;// variable declaration
 
   for (i = 1; i <= 5; i++) // outer loop for rows
   {
       for (j = 1; j <= 5; j++) // inner loop for columns
       {
           printf("*");// print stars
       }
       printf("\n");// print newline
   }
 
   return 0;
}

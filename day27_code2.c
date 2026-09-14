/* wap to print the following pattern
*
 ***
*****
*******
*****
 ***
  *.  */

  #include <stdio.h>
 
int main() {
   int i, j;// variable declaration
 
   /* Upper half */
   for (i = 1; i <= 4; i++)// loop for upper half
    {
 
       for (j = 1; j <= 4 - i; j++) // loop for spaces
       {
           printf(" ");
       }
 
       for (j = 1; j <= 2 * i - 1; j++) // loop for stars
       {
           printf("*");
       }
 
       printf("\n");
   }
 
   /* Lower half */
   for (i = 3; i >= 1; i--) //  loop for lower half
   {
 
       for (j = 1; j <= 4 - i; j++) // loop for spaces
       {
           printf(" ");
       }
 
       for (j = 1; j <= 2 * i - 1; j++)// loop for stars
        {
           printf("*");
       }
 
       printf("\n");
   }
 
   return 0;
}
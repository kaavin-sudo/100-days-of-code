// Classifying the type of triangle using if else

#include <stdio.h>
 
int main()
{
   int a, b, c;// variable declaration
 
   printf("Enter three sides: ");// taking input from the user of the sides of triangle
   scanf("%d %d %d", &a, &b, &c);
 
   if (a == b && b == c)// first condition
   {
       printf("Equilateral triangle\n");
   }
   else if (a == b || b == c || a == c)// second condition
   {
       printf("Isosceles triangle\n");
   }
   else
   {
       printf("Scalene triangle\n");
   }
 
   return 0;
}

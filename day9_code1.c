// quadratic equation and discriminant program

#include <stdio.h>
#include <math.h>
 
int main()
{
   float a, b, c, d;// variable declaration
   float root1, root2;
 
   printf("Enter a, b and c: ");// taking input from the user
   scanf("%f %f %f", &a, &b, &c);
 
   d = b * b - 4 * a * c;// operation for finding out discriminant 
 
   if (d > 0)// 1st dicriminant condition
   {
       root1 = (-b + sqrt(d)) / (2 * a);// operation for finding out the first root
       root2 = (-b - sqrt(d)) / (2 * a);// operation for finding out the second root
 
       printf("Two real and different roots\n");
       printf("Root 1 = %.2f\n", root1);
       printf("Root 2 = %.2f\n", root2);
   }
   else if (d == 0)// 2nd discriminant condition
   {
       root1 = -b / (2 * a);
 
       printf("Two real and equal roots\n");
       printf("Root = %.2f\n", root1);
   }
   else
   {
       printf("Complex roots\n");
   }
 
   return 0;
}
// printing grades according to the marks

#include <stdio.h>
 
int main()
{
   int marks;// declaring variable
   printf("Enter marks: ");// taking inout from the user
   scanf("%d", &marks);
 
   if (marks >= 90)// condition for grade A
   {
       printf("Grade A\n");
   }
   else if (marks >= 75)// condition for grade B 
   {
       printf("Grade B\n");
   }
   else if (marks >= 60)// // condition for grade C
   {
       printf("Grade C\n");
   }
   else if (marks >= 40)// condition for grade D
   {
       printf("Grade D\n");
   }
   else
   {
       printf("Grade F\n");// if none of the conditions are true then the grades are to be printed as F
   }
 
   return 0;
}
// electricity bill calculator

#include <stdio.h>
 
int main()
{
   int units;// variable declaration
   float bill;
 
   printf("Enter units consumed:\n ");// taking input from the user
   scanf("%d", &units);
 
   if (units <= 100)// condition 1
   {
       bill = units * 5;// calculating the bill according to 1st condition
   }
   else if (units <= 200)// condition 2
   {
       bill = (100 * 5) + (units - 100) * 7;// calculating the bill according to the 2nd condition
   }
   else if (units <= 300)// 3rd condition
   {
       bill = (100 * 5) + (100 * 7) + (units - 200) * 10;// calculating the bill according to the 3rd condition
   }
   
   else
   {
       bill = (100 * 5) + (100 * 7) +
              (100 * 10) + (units - 300) * 12;
   }
 
   printf("Electricity Bill = Rs. %.2f\n", bill);
 
   return 0;
}

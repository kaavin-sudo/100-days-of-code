// Library fine program

#include <stdio.h>
 
int main()
{
   int days, fine;// variable declaration
 
   printf("Enter number of late days: \n");// taking input from the user
   scanf("%d", &days);
 
   if (days <= 5)// condition 1
   {
       fine = days * 2;// operation for calculating the fine
       printf("Fine = Rs. %d\n", fine);// printing the fine
   }
   else if (days <= 10)// 2nd condition
   {
       fine = (5 * 2) + (days - 5) * 4;// calculating the fine
       printf("Fine = Rs. %d\n", fine);// printing the fine
   }
   else if (days <= 30)// 3rd condition
   {
       fine = (5 * 2) + (5 * 4) + (days - 10) * 6;// calculating the fine
       printf("Fine = Rs. %d\n", fine);// printing the fine
   }
   else
   {
       printf("Membership Cancelled\n");// if none of the conditions match
   }
 
   return 0;
}
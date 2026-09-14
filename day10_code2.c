// printing the days of the week using switch case

#include <stdio.h>
 
int main()
{
   int day;// variable declaration
 
   printf("Enter day number (1-7): ");// taking input from the user
   scanf("%d", &day);
 
   switch (day)
   {
       case 1:// first case
           printf("Monday\n");
           break;
 
       case 2:// second case
           printf("Tuesday\n");
           break;
 
       case 3:// third case
           printf("Wednesday\n");
           break;
 
       case 4:// 4th case
           printf("Thursday\n");
           break;
 
       case 5:// 5ht case
           printf("Friday\n");
           break;
 
       case 6:// 6th case
           printf("Saturday\n");
           break;
 
       case 7:// 7th case
           printf("Sunday\n");
           break;
 
       default:// the default case(it is printed if none of the cases are true)
           printf("Invalid day number\n");
   }
 
   return 0;
}
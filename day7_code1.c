//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main()
{
    int year;// decalaring the vairable
    printf("input a year:\n");// taking input of the year from the user
    scanf("%d",&year);
    if(year%400==0)// condition to check if the year is a leap year or not
    {
        printf("%d is a leap year\n",year);// printing if the year is leap year
    }
        else if(year%4==0 && year%100!=0)// second condition to check if the year entered is a leap year
        {
            printf("%d is a leap year\n", year);// printing if the second conditon for checking leap year is true
        }
    else
    {
        printf("%d is not a leap year\n",year);// printing if the year is not a leap year
    }
}
    
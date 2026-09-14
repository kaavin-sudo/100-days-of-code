//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main()
{
    int num;// variable declaration
    printf("enter an integer");// prompt user for input
    scanf("%d",&num);
    if(num>0)// condition to check if the number is positive
    {
        printf("%d is a positive number\n",num);// printing if the number is positive
    }
    else if(num<0)// condition to check if the number is negative
    {
        printf("%d is a negative number\n",num);// printing if the number is negative
    }
    else
    {
        printf("the number is zero\n");// printing if the number is zero
    }
}

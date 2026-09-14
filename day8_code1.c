//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{
    int a,b,c;// declaring the variables
    printf("input the first number:\n");// printing the first variabe
    scanf("%d",&a);
    printf("input the second number:\n");// printing the second variable
    scanf("%d",&b);
    printf("input the third number:\n");// printing the third variable
    scanf("%d",&c);
    if(a>b||a>c)// condition for checkin if the first number is the greatest number
    {
        printf("%d is the greatest number\n",a);// printing if the first number is the greatest number
    }
    else if(b>a||b>c)// condition to check if the second number is the greatest number
    {
        printf("%d is the greatest number\n",b);// printing if the second number is the greatest number

    }
    else
    {
        printf("%d is the greatest number\n",c);// printing if the third number is the greatest
    }
}
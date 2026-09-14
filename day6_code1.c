//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main()
{
    int num;// variable declaration
    printf("enter an integer:\n");// prompt user for input
    scanf("%d",&num);
    if(num%2==0)// condition to check if the number is even
    {
        printf("%d is an even integer\n",num);// printing if the number is even
    }
    else{
        printf("%d is an odd integer\n",num);// printing if the number is odd
    }
}
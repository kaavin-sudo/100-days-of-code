//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{ 
    int p, n;// variable declaration
    float r, si,ci;
    printf("enter the principal amount,rate of interest amd time period in years:");/*prompt to enter the principal amount, 
    rate of interest and time period in years*/
    scanf("%d %f %d",&p,&r,&n); // read the principal amount, rate of interest and time period in years from the user input
si= p*n*r/100;// calculating the simple interest
ci= p*pow(1+r/100,n) - p;// calcualting the compound interest
printf("Simple Interest = %.2f\n",si);// printing the simple interest
printf("Compound Interest = %.2f\n",ci);// printing the compound interest
    return 0;
}
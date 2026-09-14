//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main () 
{
 int n,i,p=1 ;// variable declaration
 printf("Enter the value of n \n");// taking input from the user
 scanf("%d" ,&n);
 for (i=2;i<=n;i+=2)// applying the for loop
  {
  p=p*i ;// calculating the product
 }
  printf("The product is : %d" ,p);// printing the product
 return 0;
}
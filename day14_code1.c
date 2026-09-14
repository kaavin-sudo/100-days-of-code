// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main () 
{
 int n,i,s=0 ;// variable declaration
 printf("Enter the value of n \n");// accepting value from the user
 scanf("%d" ,&n);
 for (i=1 ;i<=(2*n-1) ; i+=2) // applying for loop 
 {
  s = s+i ;// operation for calculating the sum
 }
 printf("The sum is : %d" ,s);// printing the sum
 return 0 ;
}
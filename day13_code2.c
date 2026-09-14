//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>
int main () 
{
 int i,n;// variable declaration
 printf("Enter upto which No to be printed");// accepting input of n from the user
 scanf("%d" ,&n);
 for (i=1;i<=n;i++) // applying for loop
 {
  printf("%d \n" ,i);// printing the numbers from 1 to 5
 }
 return 0 ;
}
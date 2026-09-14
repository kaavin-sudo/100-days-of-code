//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main () 
{
 int a,b,n ;// variable declaration
 printf("Enter 1 for Addition 2 for subtraction 3 for Multlipication 4 for division and 5 for finding remainder \n");
 scanf("%d" ,&n);
 printf("Enter the two numbers \n");
 scanf("%d %d" ,&a ,&b);
 switch (n) {
  case 1 :
   printf("the sum is %d" ,a+b);// printing the sum if its case 1
   break;
  case 2 :
   printf("the diffrence is %d" ,a-b);//printing the difference if its case 2
   break;
  case 3 :
   printf("the product is %d" ,a*b);//printing the product if its case 3
   break;
  case 4 :
   printf("the quotient is %d" ,a/b);// printing the quotient if its case 4
   break;
  case 5 :
   printf("the remainder is %d" ,a%b);// printing the remainder if its case 5
   break;
 }
 return 0 ;
}
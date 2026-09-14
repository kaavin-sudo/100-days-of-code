// wap to swap the first and last digit of a number 
#include <stdio.h>
 
int main() {
   int n, original, first, last;
   int divisor = 1;
   int middle, result;
 
   printf("Enter a number: ");
   scanf("%d", &n);
 
   original = n;
 
   while (n >= 10) {
       n = n / 10;
       divisor = divisor * 10;
   }
 
   first = n;
   last = original % 10;
 
   middle = (original % divisor) / 10;
 
   result = last * divisor + middle * 10 + first;
 
   printf("Number after swapping = %d\n", result);
 
   return 0;
}


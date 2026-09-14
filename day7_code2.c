//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
 
int main()
{
   char ch;// variable declaration
 
   printf("Enter a character: ");// taking input from the user
   scanf("%c", &ch);
 
   if (ch == 'a' || ch == 'e' || ch == 'i' ||// condtion to check whether the input character is a vowel
       ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' ||
       ch == 'O' || ch == 'U')
   {
       printf("Vowel\n");// printing if the character is a vowel
   }
   else
   {
       printf("Consonant\n");// printing if the character is a consonant
   }
 
   return 0;
}

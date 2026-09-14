//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main()
 {
    char ch;// declaring the variables
    printf("Enter any character: ");// taking input
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') // condition to check if the character is uppercase
    {
        printf("'%c' is an uppercase alphabet.\n", ch);// printing if the character is uppercase
    } 
    else if (ch >= 'a' && ch <= 'z')//  condition to check if the character is lowercase
    {
        printf("'%c' is a lowercase alphabet.\n", ch);//printing if the character is lowercase
    } 
    else if (ch >= '0' && ch <= '9') // condition to check if the character is a digit
    {
    
        printf("'%c' is a digit.\n", ch);// printing if the character is a digit
    } 
    else 
    {
        printf("'%c' is a special character.\n", ch);//printing if the character is a special character
    }return 0;
}
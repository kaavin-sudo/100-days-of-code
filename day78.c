#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0;
    int consonants = 0;

    /* Open the file in read mode */
    fp = fopen("input.txt", "r");

    /* Check if file opened successfully */
    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    /* Read the file character by character */
    while((ch = fgetc(fp)) != EOF)
    {
        /* Check only alphabetic characters */
        if(isalpha(ch))
        {
            /* Convert character to lowercase */
            ch = tolower(ch);

            /* Check if the character is a vowel */
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    /* Close the file */
    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

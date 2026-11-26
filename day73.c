#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;

    /* Open the file in read mode */
    fp = fopen("info.txt", "r");

    /* Check if file opened successfully */
    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    /* Read the file character by character */
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        /* Count newline characters */
        if(ch == '\n')
        {
            lines++;
        }

        /* Space, tab or newline means end of a word */
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            /* Beginning of a new word */
            words++;
            inWord = 1;
        }
    }

    /* If file is not empty and last line has no newline */
    if(characters > 0)
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

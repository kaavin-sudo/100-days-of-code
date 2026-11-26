#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    /* Open existing file in append mode */
    fp = fopen("info.txt", "a");

    /* Check if file opened successfully */
    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    /* Take a new line of text from the user */
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    /* Append the text at the end of the file */
    fprintf(fp, "%s", text);

    /* Close the file */
    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}

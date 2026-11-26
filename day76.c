#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    /* Ask the user for the filename */
    printf("Enter filename: ");
    scanf("%s", filename);

    /* Try to open the file in read mode */
    fp = fopen(filename, "r");

    /* Check if the file exists */
    if(fp == NULL)
    {
        printf("Error: File does not exist or could not be opened.");
        return 1;
    }

    printf("\nFile contents:\n");

    /* Read and display the file character by character */
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    /* Close the file */
    fclose(fp);

    return 0;
}

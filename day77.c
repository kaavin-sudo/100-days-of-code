#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    int ch;

    /* Open input.txt in read mode */
    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Error: input.txt could not be opened.");
        return 1;
    }

    /* Open output.txt in write mode */
    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Error: output.txt could not be opened.");
        fclose(input);
        return 1;
    }

    /* Read each character from input.txt */
    while((ch = fgetc(input)) != EOF)
    {
        /* Convert lowercase character to uppercase */
        ch = toupper(ch);

        /* Write the character to output.txt */
        fputc(ch, output);
    }

    /* Close both files */
    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.");

    return 0;
}

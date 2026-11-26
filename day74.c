#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    /* Take filenames from the user */
    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    /* Open source file in read mode */
    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Source file could not be opened.");
        return 1;
    }

    /* Open destination file in write mode */
    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("Destination file could not be opened.");
        fclose(source);
        return 1;
    }

    /* Read one character and write it to destination */
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    /* Close both files */
    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}

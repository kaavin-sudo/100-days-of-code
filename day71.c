#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    /* Open info.txt in write mode */
    fp = fopen("info.txt", "w");

    /* Check if file was opened successfully */
    if(fp == NULL)
    {
        printf("Unable to create file.");
        return 1;
    }

    /* Take user input */
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    /* Write data into the file */
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    /* Close the file */
    fclose(fp);

    printf("Data successfully saved to info.txt");

    return 0;
}

#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    /* Open numbers.txt in read mode */
    fp = fopen("numbers.txt", "r");

    /* Check if the file opened successfully */
    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    /* Read integers until the end of the file */
    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    /* Close the file */
    fclose(fp);

    /* Calculate and display average */
    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("The file contains no integers.");
    }

    return 0;
}

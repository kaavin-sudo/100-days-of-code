//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int seconds, hours, minutes, remaining_seconds;
    // input time in seconds
    printf("enter time in seconds:");
    scanf("%d",&seconds);
    // calculate hours, minutes and remaining_seconds
    hours= seconds/3600;//
    remaining_seconds= seconds%3600;
    minutes= remaining_seconds/60;
    remaining_seconds= remaining_seconds%60;
    // print the result in hours:minutes:seconds format
    printf("Time in hours:minutes:seconds format is %d:%d:%d\n",hours, minutes, remaining_seconds);
    return 0;
}
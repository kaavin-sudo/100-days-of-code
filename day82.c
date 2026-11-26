#include <stdio.h>

/* Define enumeration for traffic lights */
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    int choice;

    printf("0. RED\n");
    printf("1. YELLOW\n");
    printf("2. GREEN\n");

    printf("Enter traffic light value: ");
    scanf("%d", &choice);

    light = choice;

    /* Check traffic light value */
    switch(light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid traffic light value");
    }

    return 0;
}

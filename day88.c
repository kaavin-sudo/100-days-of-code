#include <stdio.h>

/* Define enum */
enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum Day day;

    /* Array containing enum names */
    char *names[] =
    {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    /* Print enum names and values using loop */
    for(day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}

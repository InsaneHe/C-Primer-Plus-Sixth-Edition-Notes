#include <stdio.h>
#define H_TO_MIN 60

int main(void)
{
    int hours, minutes, minutes_rest;

    printf("Please enter the time in minutes:");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        hours = minutes / H_TO_MIN;
        minutes_rest = minutes % H_TO_MIN;
        printf("The time you enter is %d hours and %d minutes.\n", hours, minutes_rest);
        printf("Please enter the time in minutes:");
        scanf("%d", &minutes);
    }

    return 0;
}

#include <stdio.h>
#define DAY_TO_WEEK 7

int main(void)
{
    int weeks, days, days_rest;

    printf("Please enter the number of days:");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / DAY_TO_WEEK;
        days_rest = days % DAY_TO_WEEK;
        printf("%d days are %d weeks, %d days.\n", days, weeks, days_rest);
        printf("Please enter the time in days:");
        scanf("%d", &days);
    }

    return 0;
}
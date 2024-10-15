#include <stdio.h>
int main(void)
{
    int dollar_per_day, sum, x;

    printf("Please enter the number of days that you can receive $: ");
    scanf("%d", &x);

    dollar_per_day = 0;
    sum = 0;
    while (dollar_per_day++ < x)
        sum = sum + dollar_per_day;
    printf("\nsum = %d\n", sum);

    return 0;
}
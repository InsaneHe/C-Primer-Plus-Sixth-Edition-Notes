#include <stdio.h>

int main(void)
{
    int lower_limit, upper_limit, sum;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower_limit, &upper_limit);

    while (lower_limit < upper_limit)
    {
        for (sum = 0; lower_limit <= upper_limit; lower_limit++)
        {
            sum += lower_limit * lower_limit;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower_limit, upper_limit, sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }
    printf("Done\n");

    return 0;
}
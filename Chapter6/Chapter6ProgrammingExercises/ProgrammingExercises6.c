#include <stdio.h>

int main(void)
{
    int upper_limit, lower_limit;

    printf("Please enter the lower limit and the upper limit: ");
    if (scanf("%d %d", &lower_limit, &upper_limit) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (upper_limit < lower_limit)
    {
        printf("The upper limit must be greater than the lower limit.\n");
        return 1;
    }

    printf("Integer\tSquare\tCube\n");
    for (int i = lower_limit; i <= upper_limit; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}
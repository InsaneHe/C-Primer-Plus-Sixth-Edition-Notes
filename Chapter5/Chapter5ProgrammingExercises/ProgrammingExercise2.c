#include <stdio.h>

int main(void)
{
    int i;
    int t = 0;

    printf("Please enter an integer: ");
    scanf("%d", &i);

    while (t <= 10)
    {
        printf("%d\n", i);
        ++i;
        ++t;
    }

    return 0;
}
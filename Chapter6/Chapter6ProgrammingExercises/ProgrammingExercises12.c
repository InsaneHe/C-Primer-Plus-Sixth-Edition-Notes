#include <stdio.h>
#include <math.h>
#define A 1.0

int main(void)
{
    int upper_limit;
    float sum1 = 0, sum2 = 0;
    float i;

    while (1)
    {
        printf("Enter the upper limit as the number of terms: ");
        scanf("%d", &upper_limit);

        if (upper_limit <= 0)
        {
            break;
        }

        for (i = 1.0; i <= upper_limit; i++)
        {
            sum1 += A / i;
            sum2 += pow(-1, (int)i + 1) * (A / i);
        }

        printf("The first series converges to %f and the second series converges to %f respectively.\n", sum1, sum2);

        sum1 = 0;
        sum2 = 0;
    }

    printf("Program exited.\n");

    return 0;
}
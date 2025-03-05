#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power to which\nthe number will be raised. Enter non-numeric input to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or non-numeric input to quit.\n");
    }
    printf("Invalid input detected. Exiting program.\n");

    return 0;
}

double power(double n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    else if (n == 0)
    {
        if (p == 0)
        {
            printf("0 to the power 0 is undefined.\n");
            return 1;
        }
        else
        {
            return 0;
        }
    }

    else if (p < 0)
    {
        return 1 / power(n, -p);
    }

    else
    {
        return n * power(n, p - 1);
    }
}
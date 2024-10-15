#include <stdio.h>
double cube(double x);

int main(void)
{
    double n;

    printf("Please enter a number: ");
    scanf("%lf", &n);
    printf("The result is %lf\n.", cube(n));

    return 0;
}

double cube(double x)
{
    return x * x * x;
}
#include <stdio.h>

double average(double x, double y);

int main(void)
{
    double x, y;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    printf("The average of %.2f and %.2f is %.2f\n", x, y, average(x, y));

    return 0;
}

double average(double a, double b)
{
    return 1 / ((1 / a + 1 / b) / 2);
}
#include <stdio.h>

void larger_of(double * x, double * y);
int main(void)
{
    double a, b;
    printf("Enter two numbers:\n");
    scanf("%lf %lf", &a, &b);

    larger_of(&a, &b);

    return 0;
}

void larger_of(double * x, double * y)
{
    if (*x > *y)
    {
        *y = *x;
        printf("The larger of the two numbers is the 1st one: %lf\n", *x);
    }
    else if (*x < *y)
    {
        *x = *y;
        printf("The larger of the two numbers is the 2nd one: %lf\n", *y);
    }
    else
    {
        printf("The two numbers are equal.\n");
    }

}
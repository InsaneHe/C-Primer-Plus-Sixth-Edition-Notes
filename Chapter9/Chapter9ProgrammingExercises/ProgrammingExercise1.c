#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double x, y;
    printf("Please enter 2 numbers and then this program will return the smaller one:\n");
    scanf("%d %d", &x, &y);
    min(x, y);

    return 0;
}

double min(double a, double b)
{
    if (a < b)
    {
        printf("The smaller number is %d\n", a);
    }
    else if (a > b)
    {
        printf("The smaller number is %d\n", b);
    }
    else
    {
        printf("The numbers are equal\n");
    }
}

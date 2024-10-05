#include <stdio.h>
#include <float.h>
int main(void)
{
    double a;
    float b;

    a = 1.0 / 3.0;
    b = 1.0 / 3.0;

    printf("%.4f\n", a);
    printf("%.12f\n", a);
    printf("%.16f\n", a);

    printf("%.4f\n", b);
    printf("%.12f\n", b);
    printf("%.16f\n", b);

    printf("%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}
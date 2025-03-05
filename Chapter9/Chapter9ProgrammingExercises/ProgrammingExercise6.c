#include <stdio.h>

void function(double * x, double * y, double * z);
int main(void)
{
    double a, b, c;
    printf("Enter three numbers:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    function(&a, &b, &c);

    return 0;
}

void function(double * x, double * y, double * z)
{
    double temp;
    if (*x >= *y && *x >= *z)  // x是最大值
    {
        temp = *z;
        *z = *x;
        if (*y <= temp)  // y是最小值，z是中间值
        {
            *x = *y;
            *y = temp;
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        }
        else  // z是最小值，y是中间值
        {
            *x = temp;
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        }
    }

    else if (*y >= *x && *y >= *z)  // y是最大值
    {
        temp = *z;
        *z = *y;
        if (*x <= *z)  // x是最小值，z是中间值
        {
            *y = temp;
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        }
        else  // z是最小值，x是中间值
        {
            *y = *x;
            *x = temp;
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        }
    }

    else if (*z >= *x && *z >= *y)  // z是最大值
    {
        if (*x <= *y)  // x是最小值，y是中间值
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        else  // y是最小值，x是中间值
        {
            temp = *x;
            *x = *y;
            *y = temp;
            printf("The order of the 3 numbers is: %lf, %lf, %lf\n", *x, *y, *z);
        }
    }

    else  // 三个数相等
    {
        printf("The three numbers are equal.\n");
    }
}
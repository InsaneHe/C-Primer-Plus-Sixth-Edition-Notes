#include <stdio.h>
int main(void)
{
    float a;

    printf("Please enter a floating-point number: ");
    scanf("%f", &a);
    printf("The number in decimal-point notation is: %f\n", a);
    printf("The number in scientific notation is: %e\n", a);

    return 0;
}

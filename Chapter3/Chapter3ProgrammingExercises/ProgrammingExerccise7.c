#include <stdio.h>

int main(void)
{
    float height;
    printf("Please enter your height in inches:");
    scanf("%f", &height);
    printf("Your height in centimeters is %f cm.", height / 2.54);

    return 0;
}
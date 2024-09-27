#include <stdio.h>

int main(void)
{
    float amount = 0;

    printf("Please enter an amount of water (in quarts):");
    scanf("%f", &amount);
    printf("The number of water molecules in this amount is: %f.", amount * 950 / 3e-23);

    return 0;
}
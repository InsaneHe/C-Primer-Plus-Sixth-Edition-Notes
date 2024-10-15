#include <stdio.h>
#define FEET_TO_CENT 30.48

int main(void)
{
    int height_feet;
    double height_cent, height_inch;

    printf("Enter a height in centimeters: ");
    scanf("%lf", &height_cent);

    while (height_cent > 0)
    {
        height_feet = height_cent / FEET_TO_CENT;
        height_inch = (height_cent - (height_feet * FEET_TO_CENT)) / 2.54;

        printf("%.1f cm = %d feet, %.1f inches\n", height_cent, height_feet, height_inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &height_cent);
    }
    printf("bye");

    return 0;
}
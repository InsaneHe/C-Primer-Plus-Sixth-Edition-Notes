#include <stdio.h>
#define MileToKilo 1.609
#define GallonToLiter 3.785
int main(void)
{
    float miles;
    float gallons;
    float miles_per_gallon;
    float liters_per_100km;

    printf("Please enter the number of miles you traveled: ");
    scanf("%f", &miles);
    printf("Please enter the number of gallons of gasoline you consumed: ");
    scanf("%f", &gallons);

    miles_per_gallon = miles / gallons;
    printf("The miles per gallon is: %f\n", miles_per_gallon);
    liters_per_100km = miles_per_gallon / GallonToLiter * MileToKilo / 100;
    printf("The liters-per-100-km value is: %.1f\n", liters_per_100km);

    return 0;
}

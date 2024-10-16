#include <stdio.h>
void Temperatures(double fahrenheit);

int main(void)
{
    double fahr;
    int status;

    printf("Please enter a Fahrenheit temperature (q to quit): ");
    status = scanf("%lf", &fahr);

    while (status == 1)
    {
        Temperatures(fahr);
        printf("Please enter a Fahrenheit temperature (q to quit): ");
        status = scanf("%d", &fahr);
    }

    return 0;
}

void Temperatures(double fahrenheit)
{
    const double a = 5.0 / 9.0;
    const double b = 32.0;
    const double c = 273.16;

    double celsius = a * (fahrenheit - b);
    double kelvin = celsius + c;

    printf("The temperature in Fahrenheit is %.2lf Fahrenheit degrees.\n", fahrenheit);
    printf("The temperature in Celsius is %.2lf Celsius degrees.\n", celsius);
    printf("The temperature in Kelvin is %.2lf Kelvin degrees.\n", kelvin);
}
#include <stdio.h>

// Declaration
int age;
int year_age;
int day_age;

int main(int age)
{
    printf("Enter your age: ");
    scanf("%d", &age);
    
    year_age = age;
    day_age = year_age * 365;

    printf("My age is equal to %d days.\n", day_age);
    printf("My age is equal to %d years.", year_age);

    return 0;
}
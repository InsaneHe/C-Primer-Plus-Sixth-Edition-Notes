#include <stdio.h>

int main(void)
{
    int age;

    printf("Please enter your age in years:");
    scanf("%d", &age);
    printf("This equals to %f seconds", age * 3.156e+7);
    
    return 0;
}
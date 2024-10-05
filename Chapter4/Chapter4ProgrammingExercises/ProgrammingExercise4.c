#include <stdio.h>
int main(void)
{
    float height;
    char name[30];

    printf("Please enter your height in inches: ");
    scanf("%f", &height);
    printf("Please enter your name: ");
    scanf("%s", &*name);
    printf("Dabney, you are \
    %.2f feet tall.\n", height / 12.0);

    return 0;
}
#include <stdio.h>

char main(void)
{
    int a = 0;

    printf("Please enter an ASCII code:");
    scanf("%d", &a);
    printf("The ASCII code %d is the character %c\n", a, a);

    return 0;
}
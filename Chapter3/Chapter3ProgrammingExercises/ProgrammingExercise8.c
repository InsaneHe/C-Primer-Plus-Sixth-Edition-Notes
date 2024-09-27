
#include <stdio.h>

int main(void)
{
    float volume;
    printf("Please enter your volume in cups:");
    scanf("%f", &volume);
    printf("The equivalent volume in pints is %f; in ounces is %f; in tablespoons is %f; in teaspoons is %f;.", volume / 2, volume * 8, volume * 16, volume * 48);

    return 0;
}
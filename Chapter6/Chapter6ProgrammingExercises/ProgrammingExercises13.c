#include <stdio.h>
#include <math.h>

int main(void)
{
    int array1[8];
    int i;
    int x = 0;

    for (i = 0; i < 8; i++)
    {
        array1[i] = pow(2, i+1);
    }

    do
    {
        printf("The number is: %d\n", array1[x]);
        x++;
    } while (x < 8);

    return 0;
}
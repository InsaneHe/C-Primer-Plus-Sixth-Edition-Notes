#include <stdio.h>

int main(void)
{
    int array1[8];

    printf("Please enter 8 integers: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    printf("These are the integers you entered but in reverse order: \n");

    for (int i = 7; i >= 0; i--)
    {
        printf("%d\t", array1[i]);
    }

    return 0;
}
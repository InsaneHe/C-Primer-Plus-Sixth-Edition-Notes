#include <stdio.h>

void array_printf(char array[]);

int main(void)
{
    char array1[26];

    for (int i = 0; i < 26; i++)
    {
        array1[i] = 'a' + i;
    }

    array_printf(array1);

    return 0;
}

void array_printf(char array[])
{
    for (int x = 0; x < 26; x++)
    {
        printf("%c ", array[x]);
    }
    printf("\n");
}

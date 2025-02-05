/* no_data.c -- uninitialized array */
#include <stdio.h>
#define SIZE 4

int main(void)
{
    int no_data[SIZE];    /* uninitialized array */
    int i;

    printf("%2s %10s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d %10d\n", i, no_data[i]);

    return 0;
}
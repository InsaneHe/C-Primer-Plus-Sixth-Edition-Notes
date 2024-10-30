#include <stdio.h>
#include <string.h>

int main(void)
{
    char array1[20];

    printf("Please enter a word: ");
    scanf("%s", array1);

    for (int i = strlen(array1) - 1; i >= 0; i--)
    {
        printf("%c", array1[i]);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int c;
    int upperCount = 0;
    int lowerCount = 0;

    printf("Please enter the characters (enter a newline to quit): \n");

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            upperCount++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            lowerCount++;
        }
        else if (c == '\n')
        {
            break;
        }
    }

    printf("The number of the uppercase characters: %d\n", upperCount);
    printf("The number of the lowercase characters: %d\n", lowerCount);

    return 0;
}
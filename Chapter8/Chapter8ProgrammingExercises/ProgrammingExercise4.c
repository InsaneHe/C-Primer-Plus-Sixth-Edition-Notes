#include <stdio.h>

int main(void)
{
    int c;
    int NumberOfWords, NumberOfCharCount = 0;

    printf("Please enter the characters (enter a newline to quit): \n");

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
            NumberOfCharCount++;
        }
        else if (c == ' ')
        {
            NumberOfWords++;
        }
        else if (c == '\n')
        {
            break;
        }
    }

    printf("The number of characters: %d\n", NumberOfCharCount);
    printf("The number of words: %d\n", NumberOfWords);
    printf("The average number of characters per word: %lf\n", (double) NumberOfCharCount / (double) NumberOfWords);

    return 0;
}
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char c;  // read in character
    long n_chars = 0L;  // number of characters
    int n_spaces = 0;  // number of spaces
    int n_newlines = 0;  // number of newlines

    printf("Enter text to be analyzed (# to terminate): \n");
    while ((c = getchar()) != STOP)
    {
        n_chars++;  // count characters
        if (c == ' ')  // count spaces
            n_spaces++;
        else if (c == '\n')  // count newlines
            n_newlines++;
    }

    printf("The number of spaces read is: %d.\n", n_spaces);
    printf("The number of newlines read is: %d.\n", n_newlines);
    printf("The number of all other characters read is: %d.\n", n_chars - n_spaces - n_newlines);

    return 0;
}

#include <stdio.h>
#define STOP '#'

int main(void)
{
    char last_char = 0;  // To keep track of the last character processed
    char current_char;
    long n_changes = 0;  // number of changes

    printf("Please enter your input to analyze (enter # to stop): \n");

    while ((current_char = getchar()) != STOP)  // Read character until STOP is reached
    {
        switch (current_char)
        {
            case '.':
                if (last_char != '!')
                {
                    putchar('!');
                    n_changes++;
                }
                else
                {
                    putchar('.');
                }
                break;
            case '!':
                if (last_char != '!')
                {
                    putchar('!');
                    putchar('!');
                    n_changes++;
                }
                break;
            default:
                putchar(current_char);
                break;
        }

        last_char = current_char;  // Update last_char for the next iteration
    }

    printf("\n");

    printf("The number of substitutions has made is: %ld\n", n_changes);

    return 0;
}
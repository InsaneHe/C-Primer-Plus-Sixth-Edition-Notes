#include <stdio.h>
#define STOP '#'

int main(void)
{
    int n_changes = 0;  // number of changes

    printf("Please enter your input to analyze (enter # to stop): \n");

    char last_char = 0;  // To keep track of the last character processed
    char current_char;

    while ((current_char = getchar()) != STOP)  // Read character until STOP is reached
    {
        if (current_char == '.')  // Replace '.' with '!'
        {
            if (last_char != '!')  // Avoid converting '!.' to '!!'
            {
                putchar('!');
                n_changes++;
            }
            else  // If the last character was '!', we already have '!!', so just print '.'
            {
                putchar('.');
            }
        }
        else if (current_char == '!' && last_char != '!')  // Replace '!' with '!!' only if it's not following another '!'
        {
            putchar('!');
            putchar('!');
            n_changes++;
        }
        else  // If it's not a '.' or a '!' following another '!', just print the character
        {
            putchar(current_char);
        }

        last_char = current_char;  // Update last_char for the next iteration
    }

    printf("\n");

    printf("The number of substitutions has made is: %d\n", n_changes);

    return 0;
}
#include <stdio.h>

#define STOP '#'

int main(void)
{
    char current_char;
    long ei_count = 0;  // Number of times "ei" occurs
    char last_char = 0;  // To keep track of the last character processed

    printf("Please enter your input to analyze (enter # to stop): \n");

    while ((current_char = getchar()) != STOP)  // Read character until STOP is reached
    {
        if (last_char == 'e' && current_char == 'i')  // Check if the sequence "ei" is found
        {
            ei_count++;  // Increment count when "ei" is found
        }
        last_char = current_char;  // Update last_char to current_char for the next iteration
    }

    printf("\n");

    printf("The sequence 'ei' occurs %ld times.\n", ei_count);

    return 0;
}
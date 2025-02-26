#include <stdio.h>
int main(void) {
    char get;
    int count = 0;  // To keep track of the number of pairs printed per line

    printf("Please enter your input:\n");

    while ((get = getchar()) != EOF)
    {
        // Handle newline and tab characters specially
        if (get == '\t')
        {
            printf("\\t");
        }
        
        else if (get == '\n')
        {
            printf("\\n\n");  // Print a newline and start a new line
            count = 0;  // Reset the count for the new line
            continue;  // Skip to the next iteration
        }
        
        else if (get < ' ')
        {
            // Handle other nonprinting characters using control-character notation
            printf("^%c", get + 64);
        }
        
        else 
        {
            // Print the character and its ASCII value
            printf("%c (%d)", get, get);
        }

        // Increment the count and print a newline every 10 pairs
        count++;  // After experiencing all of the possible situations, we can increment the count

        if (count == 10)
        {
            printf("\n");
            count = 0;
        }
        
        else
        {
            printf(" ");  // Add a space between pairs
        }
    }

    // Ensure the last line is properly terminated if it doesn't end with a newline
    if (count > 0)
    {
        printf("\n");
    }

    return 0;
}
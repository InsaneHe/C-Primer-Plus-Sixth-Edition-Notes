#include <stdio.h>

#define MAX_LENGTH 255

int main(void) {
    char line[MAX_LENGTH + 1]; // +1 for the null terminator '\0'
    int i, length;

    // Prompt the user and read the line
    printf("Enter a line (up to 255 characters): ");
    for (i = 0; i < MAX_LENGTH; i++) {
        // Read a character
        scanf("%c", &line[i]);
        // Check if it's the newline character
        if (line[i] == '\n') {
            break;
        }
    }
    // The length of the line is the index of the first newline character
    length = i;

    // Add the null terminator to the end of the string
    line[length] = '\0';

    // Print the line in reverse
    printf("The line in reverse order is:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", line[i]);
    }
    printf("\n"); // Newline after printing the reversed line

    return 0;
}
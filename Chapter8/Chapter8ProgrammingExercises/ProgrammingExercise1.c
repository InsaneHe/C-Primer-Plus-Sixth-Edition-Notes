#include <stdio.h>
int main(void)
{
    char input;
    int n = 0;
    printf("Please enter your input and this program will count the number of characters up to the end of file:\n");
    while ((input = getchar()) != EOF)
    {
        n++;
    }
    printf("The number of characters you entered is: %d\n", n);

    return 0;
}

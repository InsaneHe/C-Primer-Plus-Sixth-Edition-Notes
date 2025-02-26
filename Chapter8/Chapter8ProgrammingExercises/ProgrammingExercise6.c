#include <stdio.h>
char get_first(void);

int main(void)
{
    char s;
    printf("Please enter the characters (enter a newline to quit): \n");
    printf("This program will give you the 1st character you entered. \n");
    s = get_first();
    printf("The first character you entered is: %c\n", s);

    return 0;
}

char get_first(void)
{
    char ch;
    while ((ch = getchar()) == ' ' || ch == '\n')
        continue;

    return ch;
}
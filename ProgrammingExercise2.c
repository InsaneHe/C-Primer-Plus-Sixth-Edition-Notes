#include <stdio.h>

// Declaration
char name[25];
char address[25];

char main()
{
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your address: ");
    scanf("%s", &address);

    printf("%s\n", name);
    printf("%s", address);

    return 0;
}
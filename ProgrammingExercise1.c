#include <stdio.h>

// Declaration
char first_name[25];
char last_name[25];
char full_name[25];

// Function main()
char main()
{
    printf("Enter your first name: ", first_name);
    scanf("%s", first_name);
    printf("Enter your last name: ", last_name);
    scanf("%s", last_name);

    printf("%s %s\n", first_name, last_name);

    printf("%s\n%s\n", first_name, last_name);

    printf("%s", first_name);
    printf(" %s", last_name);

    return 0;
}
#include <stdio.h>
int main(void)
{
    char first_name[30];
    char last_name[30];

    printf("Please enter your first name: ");
    scanf("%s", first_name);
    printf("Please enter your last name: ");
    scanf("%s", last_name);
    printf("Your name is %s %s.\n", last_name, first_name);

    return 0;
}

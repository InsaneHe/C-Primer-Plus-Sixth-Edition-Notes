#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[30];

    printf("Please enter your first name: ");
    scanf("%s", first_name);
    printf("\"%s\"\n", first_name);

    printf("\"%*s\"\n", 20, first_name);

    printf("\"%-*s\"\n", 20, first_name);

    printf("\"%*s\"\n", strlen(first_name) + 3, first_name);

    return 0;
}
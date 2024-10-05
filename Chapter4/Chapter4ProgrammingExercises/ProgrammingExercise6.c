#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[30];
    char lastname[30];
    int rv1, rv2;

    printf("Please enter your first name: ");
    scanf("%s", firstname);
    printf("Please enter your last name: ");
    scanf("%s", lastname);
    rv1 = printf("%s ", firstname);
    rv2 = printf("%s\n", lastname);
    printf("%*d %*d\n", strlen(firstname), rv1-1, strlen(lastname), rv2-1);

    printf("%s ", firstname);
    printf("%s\n", lastname);
    printf("%-*d %-*d\n", strlen(firstname), rv1-1, strlen(lastname), rv2-1);

    return 0;
}
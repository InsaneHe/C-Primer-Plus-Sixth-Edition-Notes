#include <stdio.h>

int toes;
int n1;
int n2;

int main()
{
    toes = 10;

    n1 = 2 * toes;
    n2 = toes * toes;

    printf("The value of toes is: %d\n", toes);
    printf("The value of twice toes is: %d\n", n1);
    printf("The value of toes squared is: %d\n", n2);

    return 0;
}

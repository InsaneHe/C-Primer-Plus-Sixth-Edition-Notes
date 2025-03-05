#include <stdio.h>
void prich(char x, int i, int j);
int main(void)
{
    char a;
    int b, c;
    printf("Enter a character, two integers:\n");
    scanf("%c %d %d", &a, &b, &c);
    prich(a, b, c);

    return 0;
}

void prich(char x, int i, int j)
{
    int k, t;
    for (k = 0; k < i; k++)
    {
        for (t = 0; t < j; t++)
        {
            printf("%c", x);
        }
    }
    printf("\n");
}
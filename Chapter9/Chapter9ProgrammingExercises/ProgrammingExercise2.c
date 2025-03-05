#include <stdio.h>
#define STR '*'
void chline(char ch, int i, int j);
int main(void)
{
    int x, y;
    printf("Please enter 2 numbers and this program will print a matrix of characters:\n");
    scanf("%d %d", &x, &y);
    chline(STR, x, y);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int s = 0; s < i; s++)
    {
        for (int d = 0; d < j; d++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
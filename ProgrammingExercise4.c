#include <stdio.h>

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

int jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

int deny(void)
{
    printf("Which nobody can deny!\n");
}
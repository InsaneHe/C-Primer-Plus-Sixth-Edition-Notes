#include <stdio.h>

int main()
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",");
    printf("\n");
    br();

    return 0;
}

int br(void)
{
    printf("Brazil, Russia");
}

int ic(void)
{
    printf("India, China");
}
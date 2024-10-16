#include <stdio.h>

int main(void)
{
    int x, y;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &y);
    printf("Now enter the first operand: ");
    scanf("%d", &x);
    printf("%d %% %d is %d\n", x, y, x % y);
    
    while (x > 0)
    {
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &x);
        printf("%d %% %d is %d\n", x, y, x % y);
    }
    printf("Done\n");
    
    return 0;
}
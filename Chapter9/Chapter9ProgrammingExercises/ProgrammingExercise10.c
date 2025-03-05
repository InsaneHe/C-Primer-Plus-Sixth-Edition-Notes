#include <stdio.h>

void to_base_n(unsigned long n, int base);

int main(void)
{
    unsigned long a;
    int b;
    printf("Please enter 2 numbers, the 1st number is the number to be converted, the 2nd number is the base to convert to:\n");
    scanf("%lu %d", &a, &b);
    to_base_n(a, b);

    return 0;
}

void to_base_n(unsigned long n, int base)
{
    if (base == 2)  // 2进制
    {
        if (n >= 2)
            to_base_n(n / 2, base);
        putchar('0' + (n % 2));
    }
    else if (base == 8)  // 8进制
    {
        if (n >= 8)
            to_base_n(n / 8, base);
        putchar('0' + (n % 8));
    }
    else if (base == 16)  // 16进制
    {
        if (n >= 16)
            to_base_n(n / 16, base);
        int r = n % 16;
        putchar(r < 10 ? '0' + r : 'A' + (r - 10));
    }
    else
    {
        printf("Base %d is not supported\n", base);
    }
}
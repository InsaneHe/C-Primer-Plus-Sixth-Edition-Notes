#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main(void)
{
    int number, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("All the prime numbers smaller than or equal to the positive integer are:\n");

    for (int a = 2; a <= number; a++)
    {
        if (isPrime(a))
        {
            printf("%d\t", a);
        }
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
int Fibonacci(int n);


int main(void)
{
    int n;
    printf("Please enter an integer number n that is greater than or equal to 0:\n");
    scanf("%d", &n);

    if (n < 0)
        printf("What you entered is ineffective, please enter an integer number n that is greater than or equal to 0:\n");
    else
    {
        int result = Fibonacci(n);
        printf("Fibonacci(%d) = %d\n", n, result);
    }

    return 0;
}

int Fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
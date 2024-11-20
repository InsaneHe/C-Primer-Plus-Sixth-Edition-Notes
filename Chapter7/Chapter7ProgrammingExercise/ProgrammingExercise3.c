#include <stdio.h>
#define STOP 0

int main(void)
{
    int integers;  // read in integers
    long n_ints = 0L;  // number of integers
    int n_evens = 0;  // number of even integers
    long addition_evens = 0;  // the initial value of the addition of the even integers

    printf("Enter an integer (0 to terminate): \n");
    scanf("%d", &integers);

    while (integers != STOP)
    {
        n_ints++;  // count integers

        if (integers % 2 == 0)  // count even integers
        {
            n_evens++;
            addition_evens += integers;
        }

        printf("Enter an integer (0 to terminate): \n");
        scanf("%d", &integers);
    }

    printf("\n");

    printf("The total number of even integers (excluding the 0) entered is: %d\n", n_evens);
    if (n_evens > 0)  // Check if there are even integers to avoid division by zero
    {
        printf("The average value of the even integers is: %.2lf\n", (double)addition_evens / n_evens);
    }
    else
    {
        printf("The average value of the even integers is: N/A\n");
    }
    printf("The total number of odd integers entered is: %ld\n", n_ints - n_evens);

    return 0;
}
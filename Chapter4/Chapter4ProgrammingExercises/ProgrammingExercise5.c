#include <stdio.h>
int main(void)
{
    float speed, size;

    printf("Please enter the download speed in megabits: ");
    scanf("%f", &speed);
    printf("Please enter the size of a file in megabytes: ");
    scanf("%f", &size);

    printf("At %.2f megabits per second, a file of %.2f megabytes \
    downloads in %.2f seconds.\n", speed, size, size * 8 / speed);

    return 0;
}
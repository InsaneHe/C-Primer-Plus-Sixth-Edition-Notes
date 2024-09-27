#include <stdio.h>

int main(void)
{
    int integer_toobig = 3E38 * 100;
    printf("integer_toobig = %d\n", integer_toobig);

    double float_toobig = 3.44E400 * 100.0f;
    printf("float_toobig = %f\n", float_toobig);

    double float_toosmall = 0.1234E-10 / 2;
    printf("float_toosmall = %f\n", float_toosmall);

    return 0;
}
#include <stdio.h>

main()
{
    printf("starting now: \n");
    one_three();
    printf("done!");

    return 0;
}

one_three()
{
    printf("one\n");
    two();
}

two()
{
    printf("two\n");
    printf("three\n");
}
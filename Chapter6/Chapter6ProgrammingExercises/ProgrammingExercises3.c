#include <stdio.h>

int main() {
    int rows = 6;
    char str1[6] = "FEDCBA";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str1[j]);
        }
        printf("\n");
    }

    return 0;
}
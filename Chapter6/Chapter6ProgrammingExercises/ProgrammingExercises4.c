#include <stdio.h>

int main() {
    int rows = 6;
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < rows; i++)
    {
        int start_index = i * (i + 1) / 2;
        
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c", lets[start_index + j]);
        }
        printf("\n");
    }

    return 0;
}
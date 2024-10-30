#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows); // 用户输入行数

    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 包含26个大写字母的字符串

    // 外层循环控制行数
    for (int i = 0; i < rows; i++) {
        // 打印前导空格，使字母居中
        for (int k = 0; k < rows - i - 1; k++) {
            printf(" ");
        }

        // 打印左边的字母
        for (int j = 0; j <= i; j++) {
            printf("%c", lets[j]);
        }

        // 如果不是最后一行，打印中间的字母
        if (i > 0) {
            for (int j = i - 1; j >= 0; j--) {
                printf("%c", lets[j]);
            }
        }

        printf("\n"); // 换行
    }

    return 0;
}
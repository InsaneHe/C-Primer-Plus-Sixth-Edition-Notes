#include <stdio.h>

int main(void)
{
    double array1[8], array2[8];

    // 提示用户输入，但不在循环中重复提示
    printf("Please enter 8 values for the first array:\n");

    // 读取 array1 的元素
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &array1[i]); // 使用 %lf 读取 double 类型
    }

    // 计算 array2 的元素，即 array1 中的前 i 个元素的和
    for (int i = 0; i < 8; i++)
    {
        double sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += array1[j];
        }
        array2[i] = sum; // 将和赋值给 array2 的第 i 个元素
    }

    // 打印 array1 的元素，每个元素后跟一个制表符
    printf("array1: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%lf\t", array1[i]); // 打印 array1 的值
    }
    printf("\n"); // 换行

    // 打印 array2 的元素，每个元素后跟一个制表符
    printf("array2: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%lf\t", array2[i]); // 打印 array2 的值
    }
    printf("\n"); // 换行

    return 0;
}
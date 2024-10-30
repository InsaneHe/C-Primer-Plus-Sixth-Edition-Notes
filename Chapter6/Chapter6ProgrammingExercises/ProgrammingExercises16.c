#include <stdio.h>
#include <math.h>

#define ORIGINAL_PRINCIPAL 100
#define SIMPLE_INTEREST 0.1
#define COMPOUNDED_INTEREST 0.05

int main(void)
{
    double simple_revenue, compound_revenue;
    int i;

    i = 0; // 初始化年份为0，因为循环的第一次迭代将代表第一年

    while (1) // 使用无限循环，并在条件不满足时通过break退出
    {
        i++; // 每年增加一年
        simple_revenue = ORIGINAL_PRINCIPAL * SIMPLE_INTEREST * i + ORIGINAL_PRINCIPAL;
        compound_revenue = ORIGINAL_PRINCIPAL * pow((1 + COMPOUNDED_INTEREST), i);

        if (simple_revenue < compound_revenue)
        {
            break; // 当简单利息的收益小于复利的收益时，退出循环
        }
    }

    printf("The number of years is %d\n", i);
    printf("The simple revenue is %.2f\n", simple_revenue);
    printf("The compound revenue is %.2f\n", compound_revenue);

    return 0;
}
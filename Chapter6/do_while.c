/* do_while.c -- exit condition loop */
#include <stdio.h>
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");

    return 0;    
}


/** changeLog
* ____-__-__  created by@insaneHe
* 2025-01-12. modified by @jx-Lee
* - Q3: How to make it happen that the maximum retry times be stricted to N such as N = 50;
* - Q3 Premier: (进阶) (/^▽^)/ ，能否尝试bing.com查英文或中文网站，找到有关技术资料，把Q3中谈及的N设置为在"命令行Debug模式下，由测试人员输入，而不是'固定写死'在c源代码中？
*/
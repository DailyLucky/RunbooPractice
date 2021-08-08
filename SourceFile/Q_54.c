// 发现有些内容确实是没什么编写的必要，后面的题目我都选择性的做了
// Q_54
/*
取一个整数 a 从右端开始的 4～7 位
 */
#include <stdio.h>

int main(void) 
{
    int a = 0;

    printf("Please enter a integer number:");
    scanf("%d", &a);
    printf("The hexadecimal format of a is: %#0x\n", a);
    a &= (0b1111)<<4; // 0b是二进制数前缀
    a = a >> 4;
    printf("The result is: %#0x\n", a);

    return 0;
}
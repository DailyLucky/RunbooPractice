// Q_7
// 图形输出测试
#include <stdio.h>

int main(void)
{
    int a = 176;
    int b = 219;
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", b, a, b, a, b);
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    printf("%c%c%c%c%c\n", b, a, b, a, b);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    getchar(); // 起暂停程序的作用
    return 0;
}
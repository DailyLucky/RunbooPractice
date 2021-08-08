// Q_66
/*
输入3个数a,b,c，按大小顺序输出
 */

// 菜鸟是用指针操作来做，目的是练习指针传递，我们也这样操作
// 从小到大排序
#include <stdio.h>

// 功能：交换m，n中的值
void swap(int *m, int *n);

int main(void) 
{
    int a;
    int b;
    int c;

    printf("Please enter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b) {
        swap(&a, &b);
    }
    if (a>c) {
        swap(&a, &c);
    }
    if (b>c) {
        swap(&b, &c);
    }
    printf("%d < %d < %d\n", a, b, c);

    return 0;
}

void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
    return;
}
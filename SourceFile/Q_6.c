// Q_6
// 用*号输出字母C的图案。
#include <stdio.h>

int main(void)
{
    int test;

    printf(" *********\n");
    printf("**********\n");
    printf("**\n");
    printf("**\n");
    printf("**********\n");
    printf(" *********\n");

    return 0;
}

// 自己编写的对顶三角打印程序
#if 0
#include <stdio.h>
#define NUM_OF_STAR 9
int main(void)
{
    int i;
    int j;
    int k = 0; // 需要在行首打印的空格数
    int dir = 1; // 1: 递增  0:递减
    int row_num = NUM_OF_STAR; // 总共需要打印的行数
    if (NUM_OF_STAR%2 == 0) { // 对于偶数个*号，打印的总行数需要减1
        row_num--;
    }
    for (i=0; i<row_num; i++) {
       if (NUM_OF_STAR <= 2*k) {
            dir = !dir;
            i--; // 因为for循环一次结束后会i++，这里进行i-1就是为了抵消这次循环
            k -= 2;
            continue;
        }
        for (j=0; j<k; j++) {
            printf(" ");
        }
        for (j=0; j<NUM_OF_STAR-2*k; j++) {
            printf("*");
        }
        k += dir ? 1 : -1;
        printf("\n");
    }
    return 0;
}
#endif
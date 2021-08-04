// Q_23
/*
打印出如下图案（菱形）
   *
  ***
 *****
*******
 *****
  ***
   *
 */


#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int row = 7; // 打印的总行数
    int k = row / 2; // 每行行首打印空格的个数
    int dir = 0; // 1: 递增  0: 递减

    for (i=0; i<row; i++) {
        for (j=0; j<k; j++) {
            printf(" ");
        }
        for (j=0; j<row-2*k; j++) {
            printf("*");
        }
        k += dir ? 1 : -1;
        if (k < 0) { // 切换k变化方向
            dir = 1;   
            k += 2;         
        }
        printf("\n");
    }
    return 0;
}


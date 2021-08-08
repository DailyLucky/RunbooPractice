// Q_61
/*
打印出杨辉三角形（要求打印出10行）
 */
#include <stdio.h>

#define ROW 10 // 需要打印的行数
int main(void) 
{
    int i;
    int j;
    int a[ROW][ROW] = {0};

    for (i=0; i<ROW; i++) { // 计算部分
        for (j=0; j<=i; j++) {
            if (j==0 || j==i) { // 行首与行尾为1
                a[i][j] = 1;
                continue;
            }
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (i=0; i<ROW; i++) { // 打印部分
        for (j=0; j<=i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
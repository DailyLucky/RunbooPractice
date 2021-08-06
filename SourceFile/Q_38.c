// Q_38
/*
求一个3*3矩阵对角线元素之和
 */

#include <stdio.h>

#define ROW    3 // 行数
#define COLUMN 3 // 列数

// 从左上至右下的数归为主对角线，从左下至右上的数归为副对角线
// 我们就以计算主对角线元素之和进行程序的编写
int main(void) 
{
    int i;
    int j;
    int a[3][3] = {0};
    int sum = 0;

    printf("Please enter a 3*3 matrix: \n");
    for (i=0; i<ROW; i++) {
        for (j=0; j<COLUMN; j++) {
            scanf("%d", &a[i][j]); // %d格式化字符输入时空白符，回车这些会被略掉，很方便，%c输入时就可能需要处理了
        }
    }
    for(i=0; i<ROW; i++) {
        sum += a[i][i];
    }
    printf("The sum of main diagonal elements of 3*3 matrix is %d\n", sum);
    return 0;
}
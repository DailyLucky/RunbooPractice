// Q_40
/*
将一个数组逆序输出
 */

#include <stdio.h>

#define N 8 // 数组总长度为8

// 前面有个使用函数的题目比这道题好像还复杂一点
int main(void) 
{
    int i; 
    int temp;
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("The original array is:");
    for (i=0; i<N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i=0; i<N/2; i++) { // N的奇偶性没有影响
        temp = a[i];
        a[i] = a[N-1-i];
        a[N-1-i] = temp;
    }
    printf("The array after reversing is:");
    for (i=0; i<N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
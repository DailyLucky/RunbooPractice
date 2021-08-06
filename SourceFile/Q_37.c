// Q_37
/*
对10个数进行排序
 */

#include <stdio.h>

// 进行从小到大排序
int main(void) 
{
    int i;
    int j;
    int a[10] = {0}; // 存放待排序的10个数
    int temp = 0;

    printf("Please enter 10 numbers:");
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<9; i++) { // 使用冒泡排序
        for (j=i+1; j<=9; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
// Q_68
/*
有n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数
 */

#include <stdio.h>

#define NUM 10
// 功能：将数组a前面各数向后移m个位置，最后m个数移到最前面来
// param a[]: 数组a的地址
// param len: 数组a的长度
// param m:   数组向后移动的位置长度
void array_move(int a[], int len, int m);

int main(void) 
{
    int i;
    int a[NUM] = {0};
    printf("Please enter %d numbers:", NUM);  
    for (i=0; i<NUM; i++) {
        scanf("%d", &a[i]);
    }  
    array_move(a, NUM, 2);
    for (i=0; i<NUM; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");      

    return 0;
}

void array_move(int a[], int len, int m)
{
    int i;
    int temp_array[m]; // 备份后m个数组元素
    for (i=0; i<m; i++) {
        temp_array[i] = a[len-m+i];
    }
    for (i=len-m-1; i>=0; i--) {
        a[m+i] = a[i];
    }
    for (i=0; i<m; i++) {
        a[i] = temp_array[i];
    }
}
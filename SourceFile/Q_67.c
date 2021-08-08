// Q_67
/*
输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
 */

#include <stdio.h>

#define NUM 5
void swap(int *m, int *n);

int main(void) 
{
    int i;
    int a[NUM] = {0};
    int max = 0;
    int min = 0;
    int temp_max_index = 0;
    int temp_min_index = 0;

    printf("Please enter %d numbers:", NUM);  
    for (i=0; i<NUM; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0]; // 先把a[0]当做最大与最小的数，通过后面的比较来修改下标
    min = a[0]; 
    for (i=1; i<NUM; i++) {
        if (max < a[i]) {
            // 更新max值与索引值
            max = a[i]; 
            temp_max_index = i; 
        }
        if (min > a[i]) {
            // 更新min值与索引值
            min = a[i]; 
            temp_min_index = i; 
        }        
    }
    // printf("max is %d\n", a[temp_max_index]);
    // printf("min is %d\n", a[temp_min_index]);
    // 这里处理得不太对，如果刚好最小的数在第一位，最大的数在最后一位，这样写实际上就换过去又换回来了，相当于没有换
    // 因为是先进行最大的数与第一个数交换，所以有该处理
    // 如果是先进行最小的数与最后一个数交换，就可以类比修改
    if (temp_min_index == 0) {
        temp_min_index = temp_max_index;
    }
    swap(&a[0], &a[temp_max_index]);
    swap(&a[NUM-1], &a[temp_min_index]);
    for (i=0; i<NUM; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");    
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
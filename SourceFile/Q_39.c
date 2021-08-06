// Q_39
/*
有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中
 */

#include <stdio.h>

#define ARRAY_LENGTH 15 // 数组总长度为15，就相当于一个容量为15的线性表，初始化时我们只用10个数，剩下5个数的内存先暂时空着

// 采用折半查找的方法进行新元素插入
int main(void) 
{
    int i;
    int new_elem = 0;
    int test_array[ARRAY_LENGTH] = {1, 8, 20, 34, 36, 40, 56, 61, 70, 99}; // 剩下5个数编译器会进行0初始化
    int high = 9;
    int low = 0;
    int mid = (high+low)/2;
    int pos = 0; // 新元素应该插入的位置

    printf("The original array is:");
    for (i=0; i<10; i++) {
        printf("%d ", test_array[i]);
    }
    printf("\n");
    printf("Please enter a number: ");
    scanf("%d", &new_elem);
    while (low <= high) { // 循环退出条件
        mid = (high+low)/2;
        if (new_elem == test_array[mid]) {
            pos = mid+1;
            break;
        }
        if (new_elem < test_array[mid]) {
            high = mid - 1;
        }
        if (new_elem > test_array[mid]) {
            low = mid + 1;
        }        
    }
    if (low > high) {
        pos = low;
    }
    
    for (i=9; i>=pos; i--) { // 从待插入位置向后移位
        test_array[i+1] = test_array[i];
    }
    test_array[pos] = new_elem;
    printf("The array after inserting is:");
    for (i=0; i<11; i++) {
        printf("%d ", test_array[i]);
    }
    printf("\n");
    return 0;
}
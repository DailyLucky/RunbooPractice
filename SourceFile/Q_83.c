// Q_83
/*
求0—7所能组成的奇数个数
 */

// 一个数是否为奇数通过它的个位就能够判断出来
// 这道题说得不清不楚的，没有限制所组成奇数的最大位数，我们这里和官方一样假设最大为8位数
#include <stdio.h>

int main(void)
{
    int i = 1; // i表示所组成奇数的位数
    int num = 4;
    int total = num; // 符合题意的1~8位奇数的总个数
    // int j;

    printf("1 digit : %d\n", num);
    #if 0 // 我自己开始写的这种解法效率太低了，不用每次都重新计算，还是可以直接在上一次的结果下迭代
    for (i=2; i<=8; i++) {
        num = 4;
        for (j=2; j<i; j++) {
            num *= 8;
        }
        num *= 7; // 最高位不能为0，所以只有7种可能
        printf("%d digits: %d\n", i, num);
        total += num;
    }
    #else
    for (i=2; i<=8; i++) {
        if (i <= 2) {
            num *= 7; // 最高位不能为0，所以只有7种可能
        } else {
            num *= 8; // 除最高位与最低位外，中间的位有8种可能
        }
        total += num;
        printf("%d digits: %d\n", i, num);
    }
    #endif
    printf("1~%d digits total: %d\n", i-1, total);
    return 0;
}
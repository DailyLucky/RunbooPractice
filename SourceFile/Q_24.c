// Q_24
/*
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
 */


#include <stdio.h>

int main(void)
{
    int i;
    int m = 2; // 存放分子
    int n = 1; // 存放分母
    int temp;
    float sum = 0;
    #if 0
    for (i=0; i<20; i++) {
        printf("%d/%d", m, n);
        if (i < 19) {
            printf("+");
        }
        sum += (float)m / n;
        temp = m;
        m += n;
        n = temp;    
    }
    printf(" = %f\n", sum); // 最后一次的打印要特殊一点
    #else
    for (i=0; i<19; i++) {
        printf("%d/%d+", m, n);
        sum += (float)m / n;
        temp = m;
        m += n;
        n = temp;
    }
    sum += (float)m / n;
    printf("+%d/%d = %f\n", m, n, sum); // 最后一次的打印要特殊一点
    #endif

    return 0;
}

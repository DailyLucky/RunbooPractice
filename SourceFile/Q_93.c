// Q_93
/*
时间函数举例3
 */


// 下面用到的时间库函数可以到权威些的手册看他们的功能
#include <stdio.h>
#include <time.h>

int main(void) 
{
    long i = 10000000L;
    clock_t start, finish;
    double time_need;

    printf("Do %d times void loops need time:", i);
    start = clock();
    while (i-- != 0) {

    }
    finish = clock();
    time_need = (double)(finish-start) / CLOCKS_PER_SEC;
    printf("%lfs\n", time_need);
    return 0;
}
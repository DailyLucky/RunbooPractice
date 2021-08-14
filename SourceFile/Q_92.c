// Q_92
/*
时间函数举例2
 */


// 下面用到的时间库函数可以到权威些的手册看他们的功能
// time();
// difftime();
#include <stdio.h>
#include <time.h>

int main(void) 
{
    time_t start;
    time_t end;
    int i;
    long long int j;

    start = time(NULL);
    for (i=1; i<60000000; i++) {
        j *= i; // 如果这个循环执行的时间小于1s，后面的结果就会为0
        j /= i;
    }
    end = time(NULL);
    printf("The interval is %6.3lf\n", difftime(end, start)); // %6.3f表示宽度为6位，保留3位小数，不足6位用空格补齐
    return 0;
}
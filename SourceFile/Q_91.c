// Q_91
/*
时间函数举例1
 */

#include <stdio.h>
#include <time.h>

int main(void) 
{
    // 简单的写一下我对这个程序的理解
    time_t raw_time = 0; // 定义变量raw_time，用来存储从1970.01.01开始到现在经过的秒数
    struct tm *timeinfo = NULL; // 定义一个指向struct tm类型的指针

    time(&raw_time); // 获取从1970.01.01开始到现在经过的秒数
    timeinfo = localtime(&raw_time); // 通过获取的总s数计算出当前日期
    // printf("%lld\n", raw_time);
    printf("Current local time is: %s\n", asctime(timeinfo)); // 打印日期信息
    return 0;
}
// 用到了time_t类型，实际上是是long long int类型
// 用到了time.h中的三个function：time()，localtime()，asctime()
// 想了解更多内容可以去看看相关库的文档
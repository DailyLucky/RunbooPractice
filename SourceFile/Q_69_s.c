// Q_69
/*
有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位
 */

#include <stdio.h>

typedef struct Person {
    int number;
    int flag; // flag判断此人是否已退出，已退出为0，未退出为1
} Person;

int main(void) 
{
    Person a[30] = {{0,0}}; // 暂定n<=30
    int person_num = 0;
    int i;
    int mark_num = 0;
    int cnt = 0;
    printf("Please enter peesons number:");
    scanf("%d", &person_num);

    for (i=0; i<person_num; i++) {
        a[i].number = i+1;
        a[i].flag = 1;
    }
    while (mark_num < person_num-1) {
        for (i=0; i<person_num; i++) {
            if (a[i].flag == 0) { // 已经退出的人就跳过
                continue;
            }
            cnt++;
            if (cnt%3 == 0) {
                a[i].flag = 0;
                mark_num++;
                cnt = 0;
            }
        }
    }
    for (i=0; i<person_num; i++) {
        if (a[i].flag == 1) {
            printf("The last person left is the serial number %d\n", a[i].number);
            break;
        }
    }
    return 0;
}

// 比官网的解法要复杂一些，不够精简，不过思路大体上是相同的。都是通过标记来标识对象是否退出，循环结束标志
// 也都是 已标记人数=总人数-1，故在 已标记人数<总人数-1时才会执行循环。
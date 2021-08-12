// Q_80
/*
海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只
猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了
一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的，
问海滩上原来最少有多少个桃子？
 */

// 有点类似于前面做的那道猴子吃桃子的问题(每天吃前一天桃子数的一半加一个)，采用倒推法

// 循环中要搞清楚参与循环的变量的意义，便于我们能够编写合适的条件进行流程控制
// 不过写循环条件真的好难啊，又难又烦的，ε=(´ο｀*)))唉
#include <stdio.h>

int main(void)
{
    // int current_peach_num = 4; // 因为是求最少，所以在第五只猴子这样操作后还剩4个桃子
    // 像上面这么想就想得太少了，4个桃子不能满足前面几只猴子分桃子时都能分成5份多1个的情况
    int current_peach_num = 0;
    int monkey_num = 0;
    int i = 1;

    while (1) { // 死循环，通过内部判断来break
        current_peach_num = 4*i; // 第五只猴子分完后的最少桃子数，通过i来修正，使能满足题目条件
        monkey_num = 5;
        while (monkey_num != 0) {
        // 开始没注意到，这里的current_peach_num一定得能整除4才行
            if (current_peach_num%4 != 0) {
                i++;
                break;
            }
            current_peach_num = 5 * current_peach_num/4 + 1; // 从剩下的4份变为5份加1个
            monkey_num--;
        }
        if (monkey_num == 0) {
            break;
        }
    }

    printf("The least peach number is: %d\n", current_peach_num);

    return 0;
}


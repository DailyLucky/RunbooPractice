// Q_11
// 古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
// 小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总
// 数为多少？（输出前40个月即可）

#include <stdio.h>

int main(void)
{
    int i;
    int rabbit_pair_num = 1; // 兔子总对数
    int m = 1; // 迭代过程量, m保存上两次的值
    int temp = 1;

    for (i=1; i<=40; i++) {
        if (i == 1 || i == 2) {
            rabbit_pair_num = 1;
            printf("%d\n", rabbit_pair_num);
            continue;
        }
        m = temp;
        temp = rabbit_pair_num;
        rabbit_pair_num += m;
        printf("%d\n", rabbit_pair_num);
    }


    return 0;
}
// 该问题实际上斐波那契数列的问题，比如要知道第x个月有多少对兔子，我们需要先得出x-1, x-2
// 个月时各有多少对兔子，x-1个月的兔子数即上月的兔子对数f(x-1)，x-2个月的兔子数则是已具备生育能力的
// 兔子对数f(x-2)，x-1个月的兔子对f(x-1)中有f(x-2)对能生育，故x月的兔子对数f(x)==f(x-1) + f(x-2)

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int f1=1,f2=1,i;
    for(i=1;i<=20;i++)
    {
        printf("%12d%12d",f1,f2);
        if(i%2==0) printf("\n");
        f1=f1+f2;
        f2=f1+f2;
    }
    
    return 0;
}
#endif
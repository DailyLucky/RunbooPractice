// Q_21
// 猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，
// 又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。


#include <stdio.h>

int main(void)
{
    int i;
    int day = 10;
    int yesterday_num = 0; // 存放上一天的桃子数
    int today_num = 1; // 第10天剩下的桃子数为1，以其为初始值进行倒推

    while (--day) { // 只循环9次
        yesterday_num = (today_num + 1) * 2;
        today_num = yesterday_num;
    }
    printf("The total number of peach is %d\n", yesterday_num);


    return 0;
}

// 本题使用倒推的思想解答最为简单

#if 0

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int day, x1 = 0, x2;
    day=9;
    x2=1;
    while(day>0) {
        x1=(x2+1)*2;  // 第一天的桃子数是第2天桃子数加1后的2倍
        x2=x1;
        day--;
    }
    printf("总数为 %d\n",x1);
    
    return 0;
}

#endif
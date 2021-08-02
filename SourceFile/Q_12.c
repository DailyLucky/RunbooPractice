// Q_12
// 判断101到200之间的素数

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int j;
    int flag = 1; // 素数判断标记， 1:素数  0:合数

    for (i=101; i<=200; i++) {
        flag = 1; // 每次进入该循环体都需要重置标记
        for (j=2; j<sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include <stdio.h>
 
int main()
{
    int i,j;
    int count=0;
    
    for (i=101; i<=200; i++) 
    {
        for (j=2; j<i; j++) 
        {
        // 如果j能被i整除在跳出循环
            if (i%j==0) 
                break;
        }
    // 判断循环是否提前跳出，如果j<i说明在2~j之间,i有可整除的数
        if (j>=i) 
        {
            count++;
            printf("%d ",i);
        // 换行，用count计数，每五个数换行
            if (count % 5 == 0) 
            printf("\n");
        }
    }    
    return 0;
}
#endif
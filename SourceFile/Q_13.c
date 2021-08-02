// Q_13
// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字
// 立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次
// 方＋5的三次方＋3的三次方

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int j;
    int sum = 0; // i的个位、十位、百位的立方和
    int temp;

    for (i=100; i<1000; i++) {
        temp = i;
        sum = 0; // 刚开始一直不出结果，原来是忘了每次如循环体需要把sum清零，不然一直累加肯定是错误的
        for (j=0; j<3; j++) {
            sum += pow(temp%10, 3);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int i,x,y,z;
    for(i=100;i<1000;i++)
    {
        x=i%10;
        y=i/10%10;
        z=i/100%10;
        
        if(i==(x*x*x+y*y*y+z*z*z))
        printf("%d\n",i);
        
    }
    return 0;
}
#endif
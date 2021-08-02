// Q_18
// 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制


#include <stdio.h>

int main(void)
{
    int i;
    int a = 0; // 存放需要相加的那个基数
    int add_times = 1; // 存放需要加几次
    int temp = 0;
    int sum = 0;

    printf("Please enter the number and times for adding: ");
    scanf("%d", &a);
    scanf("%d", &add_times);
    for (i=0; i<add_times; i++) {
        temp = 10 * temp + a;
        sum += temp;
    }
    printf("The result is %d\n", sum);
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int s=0,a,n,t;
    printf("请输入 a 和 n：\n");
    scanf("%d%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}
#endif
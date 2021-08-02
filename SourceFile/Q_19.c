// Q_19
// 一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。


#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int a[50]; // 存放因子的数组，方便等会儿以等式关系输出完数
    int factor_num = 0; // 因子个数
    int factor_sum = 0; // 因子之和

    // 迭代法还是很好用
    for (i=1; i<1000; i++) {
        factor_num = 0; // 重置因子个数
        factor_sum = 0; // 重置因子之和
        for (j=1; j<=i/2; j++) {
            if (i%j == 0) {
                a[factor_num++] = j; // 等价于 a[factor_num] = j; factor_num++;
                factor_sum += j;
            }
        } 
        if (i == factor_sum) {
            printf("%d=1", i);
            for (j=1; j<factor_num; j++) { // 这里为了少用一个变量，直接又把j给拿来用了
                printf("+%d", a[j]);
            }
            printf("\n");
        }
    }

    return 0;
}

#if 0

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
#define N 1000
int main()
{
    int i,j,k,n,sum;
    int a[256];
    for(i=2;i<=N;i++)
    {
        sum=a[0]=1;
        k=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[++k]=j;
            }
            
        }
        if(i==sum)
        {
            printf("%d=%d",i,a[0]);
            for(n=1;n<=k;n++)
                printf("+%d",a[n]);
            printf("\n");
        }
        
    }
    return 0;
}
#endif
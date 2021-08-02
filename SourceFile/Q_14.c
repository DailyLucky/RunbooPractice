// Q_13
// 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5

#include <stdio.h>

int main(void)
{
    // 循环还是做复杂了
    #if 0
    int num = 0;
    int i;
    int flag = 0; // 1:分解完成  0:分解未完成
    
    printf("Please enter an integer number: ");
    scanf("%d", &num);
    printf("%d=", num);
    while (num) {
        for (i=2; i<=num; i++) {
            if (num % i == 0) {
                num /= i;
                if (num == 1) { // 分解完成
                    flag = 1; 
                    printf("%d\n", i);
                    break;
                }
                printf("%d*", i);
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    #endif 
    int num = 0;
    int i;
    
    printf("Please enter an integer number: ");
    scanf("%d", &num);
    printf("%d=", num);
    for (i=2; i<=num; i++) {
        while (num%i == 0) {
            printf("%d", i);
            num /= i;
            if (num != 1) { //分解未结束
                printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int n,i;
    printf("请输入整数：");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1) printf("*");
        }
    }
    
    printf("\n");
    return 0;
}
#endif
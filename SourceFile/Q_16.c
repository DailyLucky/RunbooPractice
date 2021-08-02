// Q_16
// 输入两个正整数m和n，求其最大公约数和最小公倍数


#include <stdio.h>

int main(void)
{
    int m, n;
    int multi_res = 0; // 存放m*n的结果，为计算lcm做准备
    int temp = 0;
    int gcd = 0; // 最大公约数，greatest common divisor
    int lcm = 0; // 最小公倍数，least common multiple

    printf("Please enter two numbers separated by space: ");
    scanf("%d %d", &m, &n); 
    multi_res = m * n;
    while (m%n != 0) { // 辗转相除法
        temp = n;
        n = m % n;
        m = temp;
    }
    gcd = n;
    lcm = multi_res / gcd;
    printf("The greatest common divisor is %d\n", gcd);
    printf("The least common multiple is %d\n", lcm);

    return 0;
}
// 两数(m, n)最小公倍数的解法在求得最大公约数gcd的条件下非常简单，有lcm = (m*n)/gcd
// 可以这样理解，n/gcd后与m就除了1之外没有公约数了，所以此时数n/gcd与数m的最小公倍数就是
// 两者乘积，上面的公式同样是成立的，对于数n/gcd与数m，他们的gcd==1

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int a,b,t,r,n;
    printf("请输入两个数字：\n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {t=b;b=a;a=t;}
    r=a%b;
    n=a*b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("这两个数的最大公约数是%d，最小公倍数是%d\n",b,n/b);
    
    return 0;
}
#endif
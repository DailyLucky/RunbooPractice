// Q_26
/*
利用递归方法求5!
 */


#include <stdio.h>

// 功能：计算n的阶乘，并将计算结果返回
// 注意：给定的int类型，要注意溢出的问题
int Factoril(int n); 

int main(void)
{
    int res = 0;

    res = Factoril(5);
    printf("The result is %d\n", res);
    return 0;
}

int Factoril(int n) {
    if (n == 0) { // 临界条件
        return 1;
    }
    return (n * Factoril(n-1)); // 递归条件
}

// 递归要抓住两个条件：
// 1. 递归结束时(开始返回了)的临界条件
// 2. 继续递归的递归条件
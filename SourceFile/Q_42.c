// Q_42
/*
学习使用auto定义变量的用法
 */

// 函数中默认状态下定义的变量就是auto类型的，就是正宗的局部变量，由栈为我们分配并释放
#include <stdio.h>

int TestFunction(void);

int main(void) 
{
    int i;
    int num_get = 0;
    for (i=0; i<10; i++) {
        num_get = TestFunction(); // 
        printf("Current value of num is: %d\n", num_get);
    }
    return 0;
}

int TestFunction(void)
{
    auto int num = 0; // 函数调用结束内存被释放，生命周期结束，该函数每次被调用时num都会被重新初始化
    return num++;
}
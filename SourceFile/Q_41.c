// Q_40
/*
学习static定义静态变量的用法
 */

#include <stdio.h>
#include <stdlib.h>

int TestFunction(void);

int test_num = 1;
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
    int address_test1 = 0;
    static int num = 0; // static修饰的局部变量在函数调用结束后并不会被销毁，如果有多次调用也只会初始化最开始那一次
                        // static修饰的变量会存放在全局和静态变量存储区
                        // static不能改变变量的作用域，num虽然不会被销毁，但是作用域还是只在TestFunction中
    int *heap_test = (int *)malloc(sizeof(int)); // 动态分配内存，存放在堆区
    int address_test2 = 0;
    free(heap_test);
    heap_test = NULL; // 记得把指针置为空指针，避免出现野指针的情况
    return num++;
}
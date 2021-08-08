// Q_47
/*
宏#define命令练习2
 */


#include <stdio.h>

#define MUL(m, n)  ((m) * (n)) // 对于宏函数，为参数添加括号是非常必要的，不然可能出现逻辑错误
int main(void) 
{
    int val = 0;

    val = MUL(3-1, 3+3);
    printf("The result is %d\n", val);
    return 0;
}


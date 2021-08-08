// Q_46
/*
宏#define命令练习
 */


#include <stdio.h>

#define LOOP_TIME  3 // 宏替换
#define MAX(a,b) ((a<b)?b:a) // 带参宏函数
#define PRINT_VAR(n) \
                    (printf("print " #n " and varn == %d\n", var##n))  // 宏延续符 '\', 宏字符串替换符'#', 宏粘贴符'##'
                    // 在宏中的'\'后不要加其他内容，空格、注释都不要加。加注释直接报错，加空格会报warnig
int main(void) 
{
    int i;
    int test_number = 2;
    int var2 = 10;
    int var5 = 50;

    for (i=0; i<LOOP_TIME; i++) {
        test_number++;
        printf("The max number is %d\n", MAX(i, test_number));        
    }
    PRINT_VAR(2);
    PRINT_VAR(5);
    

    return 0;
}


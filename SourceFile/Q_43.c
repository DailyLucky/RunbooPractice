// Q_43
/*
学习使用static的另一用法
 */


#include <stdio.h>


int main(void) 
{
    int i;
    int test_num = 0;

    for (i=0; i<5; i++) { // 不同类型变量生命周期的测试，同时也能验证变量的作用域
        test_num++;
        printf("The first test_num is %d\n", test_num);
        {
            static int test_num = 10;
            printf("The second test_num is %d\n", test_num);
            test_num++;
        }
        {
            int test_num = 20;
            printf("The third test_num is %d\n", test_num);
            test_num++;
        }
    }

    return 0;
}


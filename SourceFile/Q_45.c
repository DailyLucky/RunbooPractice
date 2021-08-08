// Q_45
/*
学习使用register定义变量的方法
 */


#include <stdio.h>

int main(void) 
{
    int i;
    register int test_number = 99;

    for (i=0; i<3; i++) {
        test_number++;
        printf("The test_number is %d\n", test_number);        
    }


    return 0;
}


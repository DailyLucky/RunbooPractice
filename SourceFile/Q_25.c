// Q_25
/*
求1+2!+3!+...+20!的和
 */


#include <stdio.h>

int main(void)
{
    int i;
    long long int temp = 1;
    long long int sum = 0;
    //printf("%d\n", sizeof(long));
    for (i=1; i<=20; i++) {
        temp *= i; // 阶乘过程量
        sum += temp;
        printf("%d!", i);
        if (i <= 19) {
            printf("+");
        }
    }  
    printf(" = %lld\n", sum);
    return 0;
}

// long int 和 int 在该编译环境下都是占4byte空间，对于本题需要
// long long int 类型才能存放的下结果。

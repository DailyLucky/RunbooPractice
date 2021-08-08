// Q_44
/*
学习使用如何调用外部函数
 */


#include <stdio.h>

// Function Prototypes
int max(int a, int b);

int main(void) 
{
    int m = 0;
    int n = 0;

    printf("Please enter two integer numbers:");
    scanf("%d %d", &m, &n);
    printf("The max number is %d", max(m, n));

    return 0;
}

int max(int a, int b)
{
    return ((a<b)?b:a);
}


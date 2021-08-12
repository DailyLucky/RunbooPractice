// Q_75
/*
输入一个整数，并将其反转后输出
 */

#include <stdio.h>

int main(void) 
{
    int num = 0;
    int temp = 0;

    printf("Please enter a integer number:");
    scanf("%d", &num);
    while(num/10 != 0) { // num不是个位数，进入循环
        temp = 10 * temp + num % 10;
        num /= 10;
    }
    temp = 10 * temp + num % 10;
    // 下面这种循环控制看着更简洁明白
    #if 0
    while(num != 0) { // num不为0
        temp = 10 * temp + num % 10;
        num /= 10;
    }
   //temp = 10 * temp + num % 10;
    #endif
    printf("The number after reversing is %d\n", temp);
    return 0;
}
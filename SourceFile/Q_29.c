// Q_29
/*
给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字
 */


#include <stdio.h>


int main(void)
{
    int num = 1;
    int num_length = 1;
    int temp = 0;
    int i;

    printf("Please enter a positive integer number(<100000) : ");
    scanf("%d", &num);
    temp = num / 10; // 通过 temp 来获取 num 的长度，避免直接操作 num 时会丢失 num 本来的值
    while (temp != 0) {
        temp /= 10;
        num_length++;
    }
    printf("The number length is %d\n", num_length);
    printf("The reverse number is ");
    for (i=0; i<num_length; i++) {
        printf("%d", num%10);
        num /= 10;
    }
    printf("\n");
    return 0;
}


#if 0

#endif
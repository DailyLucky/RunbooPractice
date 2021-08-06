// Q_33
/*
判断一个数字是否为质数
 */


#include <stdio.h> 

int main(void) 
{
    int num = 0;
    int i;
    int flag = 1;

    printf("Please enter a integer number: ");
    scanf("%d", &num);
    for (i=2; i<num/2; i++) {
        if (num%i == 0) {
            flag = 0; // 不是素数
        }
    }
    if (flag == 1) {
        printf("Is prime number!\n");
    } else {
        printf("Isn't prime number!\n");
    }

    return 0;
}
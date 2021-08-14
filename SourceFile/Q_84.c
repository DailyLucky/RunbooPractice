// Q_84
/*
一个偶数总能表示为两个素数之和。
 */

// 官方原话：我去，这是什么题目，要我证明这个问题吗？真不知道怎么证明。那就把一个偶数分解成两个素数吧。
#include <stdio.h>
#include <math.h>

int IsPrime(int n);

int main(void)
{
    int num = 0;
    int i;

    do {
        printf("Enter a even number: ");
        scanf("%d", &num);
        for (i=2; i<=num-i; i++) {
            if (IsPrime(i) && IsPrime(num-i)) { // 这一步很巧妙，直接就把两个素数找出来了。还是要多编程，多学习！
                printf("%d = %d + %d\n", num, i, num-i);
            }
        } 
    } while (num%2 == 0); // 当输入的数不为偶数时结束
    return 0;
}

int IsPrime(int n) // n>=2
{
    int i;
    int flag = 1; // 1：是素数  0：不是素数

    for (i=2; i<sqrt(n); i++) {
        if (n%i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
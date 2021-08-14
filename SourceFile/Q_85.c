// Q_85
/*
判断一个素数能被几个9整除
 */

// 首先理一下整除与被整除：
// 给出式子  A/B = C ，A、B、C均为整数，且该式子无余数
// 被除数是A，除数是B
// 那么可以描述为A被B整除，或者是B整除A
// 所以说上面题目的意思是 素数 / 9...9的余数为0，不过这么做没什么意思啊，下面是官方的分析
// 丫的！这题目的意思是判断一个素数能整除几个9组成的数吧？我就这么理解吧。素数是不 能被除1和自身之外的数整除的
#include <stdio.h>
#include <math.h>

typedef long long int int64_t;
int main(void)
{
    int num = 0;
    int i = 0; // 统计9的个数
    int64_t val = 0;

    printf("Enter a prime number: ");
    scanf("%d", &num);
    while (1) {
        val = val * 10 + 9;
        i++;
        if (val%num == 0) {
            printf("%lld / %d = %lld, at least %d digits 9 required\n", val, num, (int64_t )val/num, i);
            break;
        }
    } 
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
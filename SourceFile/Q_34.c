// Q_34
/*
练习函数调用
 */


// 那我就用函数实现求最大公约数和最小公倍数吧

int gcd(int m, int n);
int lcm(int m, int n);

#include <stdio.h> 

int main(void) 
{
    int a, b;

    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The greatest common divisor is %d", gcd(a, b));
    printf("The least common multiply is %d", lcm(a, b));

    return 0;
}

int gcd(int m, int n) {
    int temp = 0;
    while (m%n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }
    return n;
}

int lcm(int m, int n) {
    return (m*n / gcd(m, n));
}
// Q_76
/*
编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)
 */

#include <stdio.h>

void EvenFunc(int n);
void OddFunc(int n);

int main(void) 
{
    int n = 0;
    void (* func_ptr)(int) = NULL; // 返回值为空类型，参数列表也为空的函数指针类型变量func_ptr

    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n%2 == 0) {
        func_ptr = EvenFunc;
    } else {
        func_ptr = OddFunc;
    }
    func_ptr(n); // 函数调用

    return 0;
}

void EvenFunc(int n)
{
    float sum = 0.0f;
    int i;
    for (i=2; i<n; i+=2) { // 由于要打印公式，所以最后一个数留在循环外打印
        sum += 1.0/i;
        printf("1/%d+", i);
    }
    sum += 1.0/i;
    printf("1/%d = %f\n", i, sum);
    return;
}

void OddFunc(int n)
{
    float sum = 0.0f;
    int i;
    for (i=1; i<n; i+=2) { // 由于要打印公式，所以最后一个数留在循环外打印
        sum += 1.0/i;
        printf("1/%d+", i);
    }
    sum += 1.0/i;
    printf("1/%d = %f\n", i, sum);
    return;
}
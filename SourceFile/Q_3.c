// Q_3
// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>

int main(void)
{
    // 个人的傻瓜解法，还不正确
    // 官方的解答先进行了数学处理，找到了循环条件，厉害了
    #if 0
    int i = 0;
    int j = 0;
    int temp = 0;
    int num = 1;
    while (num++) {
        temp = num + 100;
        for (i=1; i<temp/2; i++) {
            if (temp == i*i) {
                temp += 168;
                for (j=i+1; j<temp/2; j++) {
                    if (temp == j*j) {
                        printf("The number is %d\n", num);
                        break;
                    }
                }
                break;
            }           
        }
        if (temp = j*j) {
            break;
        }
    }
    return 0;
    #endif
    int i, j, m, n, x;

    for (i=2; i<(168/2)+1; i+=2) {
        if (168%i == 0) {
            j = 168 / i;
            if (i>j && (i+j)%2==0 && (i-j)%2==0) {
                m = (i+j)/2;
                n = (i-j)/2;
                x = n*n - 100;
                printf("%d + 100 = %d * %d\n", x, n, n);
                printf("%d  + 100 + 168 = %d * %d\n\n", x, m, m);
            }
        }
    }
    return 0;
}
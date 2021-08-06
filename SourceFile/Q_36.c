// Q_36
/*
求100之内的素数
 */

#include <stdio.h>
#include <math.h>

int main(void) 
{
    int i;
    int j;
    int flag = 1;
    for (i=1; i<100; i++) {
        flag = 1;
        for (j=2; j<=sqrt(i); j++) {
            if (i%j == 0) {
                flag = 0; // 不是素数
            }
        }
        if (flag == 1) {
            printf("%d\n", i);
        } 
    }
    return 0;
}
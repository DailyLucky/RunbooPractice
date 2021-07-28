// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>

// int main(void) 
// {
//     int i = 1;
//     int j = 1;
//     int k = 1;
//     int a = 0;
//     int b = 0;
//     int num = 0;

//     for (i=1; i<=4; i++) {
//         a = i;
//         for (j=1; j<=4; j++) {            
//             if (j == i) {
//                 continue;
//             }
//             b = a * 10 + j;
//             for (k=1; k<=4; k++) {
//                 if (k == j || k == i) {
//                     continue;
//                 }
//                 num = b * 10 + k;
//                 printf("%d\n", num);
//                 num = 0;
//             }
//         }
//     }

//     return 0;
// }
// 大晚上可能有点迷糊了，一个三重循环就可以搞定的问题还整出这么多额外的东西

int main(void)
{
    int i = 1;
    int j = 1;
    int k = 1;
    int num = 0;
    for (i=1; i<5; i++) {
        for (j=1; j<5; j++) {
            for (k=1; k<5; k++) {
                if (i!=j && i!=k && j!=k) {
                    num = i*100 + j*10 + k;
                    printf("%d\n", num);
                }
            }
        }
    }
    return 0;
}
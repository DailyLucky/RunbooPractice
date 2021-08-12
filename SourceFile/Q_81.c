// Q_81
/*
809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两
位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果
 */


#include <stdio.h>


int main(void)
{
    int val = 10; // 用val来存放这个两位数
    int condition_1 = 0;
    int condition_2 = 0;
    int condition_3 = 0;

    while (val < 100) {
        condition_1 = 809 * val;
        condition_2 = 8 * val;
        condition_3 = 9 * val;
        if ((999<condition_1&&condition_1<10000) 
                && (9<condition_2&&condition_2<100)
                && (99<condition_3&&condition_3<1000)) {
            printf("??:%d  809*%d=%d\n", val, val, condition_1);
        }
        val++;
    }

    return 0;
}
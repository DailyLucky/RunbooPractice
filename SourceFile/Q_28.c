// Q_28
/*
有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又
说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
 */


#include <stdio.h>

// @param person_num: 第几个人，可选序号1~5
int HowOld(int person_num);
int main(void)
{
    int n = 5; // 第n个人
    int age = 0; // 存放第n个人的年龄

    age = HowOld(n);
    printf("The %d-th person age is %d\n", n, age);
    return 0;
}

int HowOld(int person_num) {
    if (person_num == 1) {
        return 10; // 达到临界条件，返回第一个人年龄10岁
    }
    return HowOld(--person_num)+2;
}

#if 0

#endif
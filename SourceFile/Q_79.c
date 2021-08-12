// Q_79
/*
字符串排序
 */

// 我们这里选择将字符串从小到大排序 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE  20
typedef char TestString[MAX_SIZE]; // 声明一个别名，偷个懒

void StringSwap(char *s1, char *s2);

int main(void)
{
    TestString str1, str2, str3;
    int i;

    printf("Please enter three strings:\n");
    scanf("%s%s%s", str1, str2, str3);
    if (strcmp(str1, str2) > 0) { // strcmp(str1, str2) > 0 说明str1 > str2。函数strcmp()返回值有三种：<0, ==0, >0
        StringSwap(str1, str2);
    }
    if (strcmp(str1, str3) > 0) {
        StringSwap(str1, str3);
    }
    if (strcmp(str2, str3) > 0) {
        StringSwap(str2, str3);
    }
    printf("The result is:\n");
    printf("%s < %s < %s", str1, str2, str3);
    return 0;
}

void StringSwap(char *s1, char *s2)
{
    TestString temp;
    // 最大长度都是限制了的，不存在越界的问题
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
    return;
}
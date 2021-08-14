// Q_96
/*
计算字符串中子串出现的次数
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE  50

int main(void)
{
    char main_str[MAXSIZE+1];
    char sub_str[MAXSIZE+1];
    int main_len = 0;
    int sub_len = 0;
    int i;
    int j;
    int cnt = 0;
    int flag = 1;
    printf("Please enter the main string and sub string separated with ' ': ");
    scanf("%s%s", main_str, sub_str);
    main_len = strlen(main_str);
    sub_len = strlen(sub_str);
    // 字符串朴素匹配算法
    for (i=0; i<=main_len-sub_len; i++) { 
        flag = 1;
        for (j=0; j<sub_len; j++) {
            if (main_str[i+j] != sub_str[j]) { // 失配，将标志置0，退出本次循环，i向后移1位再进行比较
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            cnt++;
        }
    }
    printf("Number of sub string occurrence is: %d\n", cnt);
    return 0;
}
// Q_86
/*
两个字符串连接程序
 */

// 这个就是要注意一下字符串长度的处理
#include <stdio.h>

#define MAXSIZE  50
typedef char StringType[MAXSIZE+1];

char *StrCat(char *str1, const char *str2);
int Strlen(const char *str);

int main(void)
{
    StringType str_1, str_2;

    printf("Please enter two strings seperated by space (like: xxx xxx): ");
    scanf("%s%s", str_1, str_2);
    StrCat(str_1, str_2);
    printf("The result is: %s\n", str_1);
    return 0;
}

char *StrCat(char *str1, const char *str2)
{
    int str1_len = Strlen(str1);
    int str2_len = Strlen(str2);
    int i = str1_len;
    int j = 0;

    while (i<MAXSIZE && j<str2_len) {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    return str1;
}

int Strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
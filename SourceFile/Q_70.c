// Q_70
/*
写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度
 */

#include <stdio.h>

// 功能：统计字符串s的长度
// param s：指向字符串的指针
// 返回值：字符串s的长度(不含终止字符terminate null character '\0')
int My_strlen(char *s);

int main(void) 
{
    char str[50];
    int str_len = 0;

    printf("Please enter a string:");
    scanf("%s", str);
    str_len = My_strlen(str);
    printf("The length of string entered is %d", str_len);
    return 0;
}

int My_strlen(char *s)
{
    int len = 0;

    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}
// 编译器就是通过终止字符'\0'来判断字符串的结束的
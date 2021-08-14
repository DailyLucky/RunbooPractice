// Q_98
/*
从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保
存。 输入的字符串以！结束。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE  50
// 想多了解一些相关的内容就去查看相关的API手册吧
int main(void)
{
    FILE *fp = NULL;
    char filename[25+1] = "test.txt";
    char str_1[MAXSIZE+1];
    int str_1_len = 0;
    int i;

    // printf("Please enter the filename: ");
    // gets(filename);
    if ((fp=fopen(filename, "w")) == NULL) {
        printf("error: can not open file!\n");
        exit(0);
    }
    printf("Please enter a string ending with '!':\n");
    i = 0;
    while ((str_1[i]=getchar()) != '!') { // 开始括号位置没有加好，这里涉及到优先级的问题，关系运算符优先级高于赋值符，必须把左边括起来！
        i++;
    }
    str_1[i] = '\0'; // 用空终止字符覆盖掉'!'
    str_1_len = strlen(str_1);
    for (i=0; i<str_1_len; i++) {
        if (str_1[i]>='a' && str_1[i]<='z') {
            str_1[i] -= 32;
        }
    }
    for (i=0; i<str_1_len; i++) { // -1是直接把末尾的'!'排除了
        fputc(str_1[i], fp);
    }
    fclose(fp); // 关闭打开的文件

    return 0;
}
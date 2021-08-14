// Q_97
/*
从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止
 */

#include <stdio.h>
#include <stdlib.h>

// 该程序用到的文件操作函数有：
// fopen();
// fputc();
// fclose();
// 想多了解一些相关的内容就去查看相关的API手册吧
int main(void)
{
    FILE *fp = NULL;
    char filename[25+1];
    char ch;
    
    printf("Please enter the filename: ");
    gets(filename);
    if ((fp=fopen(filename, "w")) == NULL) {
        printf("error: can not open file!\n");
        exit(0);
    }
    printf("Now you can enter some words which you want to save ending with '#':\n");
    // 这里考虑清理掉前面留下的无效字符，比如回车换行这些不显示的字符
    scanf(" ");
    while ((ch=getchar()) != '#') {
        fputc(ch, fp);
    }
    fclose(fp); // 关闭打开的文件

    return 0;
}
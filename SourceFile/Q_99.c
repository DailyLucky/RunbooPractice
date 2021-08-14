// Q_99
/*
有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 思路就是把字符串从文件读取到内存中，进行操作后又将结果写到文件。
void StrSort(char *str);

int main(void)
{
    char buffer[100+1];
    FILE *fp = NULL;
    char ch;
    int i;
    // 从磁盘中将信息读取到内存
    fp = fopen("A.txt", "r");
    i = 0;
    while ((ch=fgetc(fp)) != EOF) {
        buffer[i] = ch;
        i++;
    }
    fclose(fp);
    fp = fopen("B.txt", "r");
    while ((ch=fgetc(fp)) != EOF) {
        buffer[i] = ch;
        i++;
    }
    fclose(fp);
    buffer[i] = '\0';
    // 在内存中进行操作
    StrSort(buffer);
    // 将结果写到文件中
    fp = fopen("C.txt", "w");
    i = 0;
    while (buffer[i] != '\0') {
        fputc(buffer[i], fp);
        i++;
    }
    fclose(fp);
    return 0;
}

void StrSort(char *str)
{
    int str_len = strlen(str);
    char temp;
    int i;
    int j;

    for (i=0; i<str_len-1; i++) { // 冒泡排序
        for (j=i+1; j<str_len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    return;
}
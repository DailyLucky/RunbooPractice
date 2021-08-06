// Q_32
/*
删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母
 */


#include <stdio.h> 
#include <string.h>

int main(void) 
{
    char del_ch = 'a';
    char src_str[20] = "jfapjgajaca"; // sizeof(src_str) == 20, str_len(src_str) == 11
                                      // 这种初始化方式编译器为在字符串末尾自动为我们加上了'\0'
                                      // 对比char src_str[20] = {'j','f','a','p','j','g','a','j','a','c','a','\0'};
    char des_str[100] = {0};
    int src_str_length = 0;
    int i;
    int des_index = 0; // 目的数组下标

    src_str_length = strlen(src_str);

    for (i=0; i<src_str_length; i++) {
        if (src_str[i] != del_ch) {
            des_str[des_index++] =  src_str[i];
        }
    }
    des_str[des_index] = '\0'; // 为目的字符数组加上终止空字符 terminate null character
    printf("%s", des_str);

    return 0;
}
// 字符串结尾一定有个终止符'\0'，这是编译器识别一串字符的标记
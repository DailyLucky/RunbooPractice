// Q_17
// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数


#include <stdio.h>

int main(void)
{
    char ch = '0';
    int letter_num = 0;
    int number_num = 0;
    int space_num = 0;
    int other_char_num = 0;
    printf("Please enter a line of characters: ");
    while ((ch=getchar()) != '\n') {
        if ((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')) {
            letter_num++;
        } else if (ch>='0'&&ch<='9') {
            number_num++;
        } else if (ch == ' ') {
            space_num++;
        } else {
            other_char_num++;
        }
    }
    printf("Total letter number is %d\n", letter_num);
    printf("Total number number is %d\n", number_num);
    printf("Total space number is %d\n", space_num);
    printf("Total ohter char number is %d\n", other_char_num);
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    char c;
    int letters=0,spaces=0,digits=0,others=0;
    printf("请输入一些字母：\n");
    while((c=getchar())!='\n')
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            letters++;
        else if(c>='0'&&c<='9')
            digits++;
        else if(c==' ')
            spaces++;
        else
            others++;
    }
    printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
    return 0;
}
#endif
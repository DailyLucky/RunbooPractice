// Q_10
// 打印楼梯，同时在楼梯上方打印两个笑脸
#include <stdio.h>

int main(void)
{
    int i;
    int j;

    printf("\1\1\n");
    for (i=0; i<8; i++) { // 8级台阶
        for (j=0; j<=i; j++) {
            printf("%c%c", 219, 219);
        }
        printf("\n");
    }
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int i,j;
    printf("\1\1\n"); /*输出两个笑脸*/
    for(i=1;i<11;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c%c",219,219);
        printf("\n");
    }
    return 0;
}
#endif
// Q_9
// 要求输出国际象棋棋盘
#include <stdio.h>

int main(void)
{
    int i;
    for (i=0; i<8; i++) {
        // 0表示白块，1表示黑块
        if (i%2 == 0) {
            printf("01010101\n");
        } else {
            printf("10101010\n");
        }
    }
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else printf("  ");
        printf("\n");
    }
    return 0;
}
#endif

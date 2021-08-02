// Q_20
// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？


#include <stdio.h>

int main(void)
{
    int i;
    float init_height = 100.0f; // 应该得用浮点数
    float total_distance = 0.0f; // 总共经过的长度
    float curr_height = init_height;

    for (i=1; i<=10; i++) {
        total_distance += curr_height * 2;
        curr_height /= 2; // 该变量也能表达反弹的高度
    }
    total_distance -= 100; // 去掉方便计算时多添加的100m
    printf("The total distance is %.3f\n", total_distance); // 保留3位小数
    printf("The height of the tenth rebound is %.3f\n", curr_height);

    return 0;
}

#if 0

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    float h,s;
    h=s=100;
    h=h/2; //第一次反弹高度
    for(int i=2;i<=10;i++)
    {
        s=s+2*h;
        h=h/2;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
    return 0;
}}
#endif
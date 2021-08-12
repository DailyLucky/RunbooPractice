// Q_78
/*
找到年龄最大的人，并输出。请找出程序中有什么问题
 */

//---------------------------------菜鸟程序部分--------------------------------------------
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
#include<stdlib.h>
struct man{
    char name[20];
    int  age;
}
person[3]={"li",18,"wang",25,"sun",25};
int main()
{
    #if 0
    struct man *q,*p;
    int i,m=0;
    p=person;
    // q = p; // 添加这条语句保证后面printf()时通过q操作的内存是合法的
    for(i=0;i<3;i++)
    {
        // 如果三个人的年龄都不大于0时，指针q没有被赋值，其初始化产生的值可能
        // 是不允许操作的内存
        if(m<p->age) 
        {
            m=p->age;
            q=p;
        }
        p++;
    }
    // 年龄相同时要输出多个人，这里需要修改
    printf("%s %d\n",q->name,q->age); 
    #endif
    struct man *q,*p;
    int i,m=0;
    p=person;
    // q = p; // 添加这条语句保证后面printf()时通过q操作的内存是合法的
    for(i=0;i<3;i++)
    {
        // 如果三个人的年龄都不大于0时，指针q没有被赋值，其初始化产生的值可能
        // 是不允许操作的内存
        if(m<p->age) // 找到最大年龄m
        {
            m=p->age;
        }
        p++;
    }
    // 年龄相同时要输出多个人，这里需要修改
    q = person;
    for (i=0; i<3; i++) {
        if (q->age == m) {
            printf("%s %d\n",q->name,q->age); 
        }
        q++;
    }  
    return 0;
}
//----------------------------------程序结束-------------------------------------------
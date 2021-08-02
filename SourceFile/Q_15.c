// Q_15
// 利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示

// 条件运算符即" ? : "，也称为三元条件运算符
#include <stdio.h>

int main(void)
{
    int grade = 0;   
    char level = 'O';
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    level = (grade>=90) ? 'A' : ((grade>=60) ? 'B' : 'C');
    printf("Your level is %c!\n", level);
    return 0;
}

#if 0
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int score;
    char grade;
    printf("请输入分数： ");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
#endif
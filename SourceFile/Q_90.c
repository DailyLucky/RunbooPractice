// Q_90
/*
专升本一题，读结果
 */

//----------------------------------程序开始-------------------------------------------
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

#define M 5
int main()
{
    int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;j=M-1; 
    while(i<j) // 交换数组元素。第1个与最后一个交换，第2个与倒数第二个交换，以此类推。
    {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j--;
    }
    for(i=0;i<M;i++) { // 将交换后的数组打印出来
        printf("%d\n",*(a+i));
    }
    
}
//--------------------------------程序结束---------------------------------------------

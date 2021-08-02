// Q_5
// 输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>

int main(void)
{
    int x, y, z;
    int temp;
    printf("Please enter 3 integer numbers: ");
    scanf("%d %d %d", &x, &y, &z);  
    if (x > y) {
        temp = x;
        x = y; 
        y = temp;
    }
    if (x > z) {
        temp = x;
        x = z; 
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z; 
        z = temp;
    }
    printf("The sorting result is %d < %d < %d\n", x, y, z);
    return 0;
}

#if 0
// 官方解答
#include <stdio.h>
 
int main()
{
    int x,y,z,t;
    printf("\n请输入三个数字:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) { /*交换x,y的值*/
        t=x;x=y;y=t;
    }
    if(x>z) { /*交换x,z的值*/
        t=z;z=x;x=t;
    }
    if(y>z) { /*交换z,y的值*/
        t=y;y=z;z=t;
    }
    printf("从小到大排序: %d %d %d\n",x,y,z);
}
#endif

// 一个支持多个数排序的程序，修改宏定义COMPARE_NUMBER的大小即可
// 在后面的参数使用了printf("%d", COMPARE_NUMBER);的写法，没有报错
// 意思是支持printf("%d", 3);这种写法了，后面直接跟常量，可以去看看库参考手册
#if 0
#include <stdio.h>

#define COMPARE_NUMBER 3 // 只进行三个数的比较
int main(void)
{
    int a[COMPARE_NUMBER];
    int i;
    int j;
    int temp;
    printf("Please enter %d integer numbers: ", COMPARE_NUMBER); 
    for (i=0; i<COMPARE_NUMBER; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<COMPARE_NUMBER-1; i++) {
        for (j=i+1; j<COMPARE_NUMBER; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorting result is: "); 
    for (i=0; i<COMPARE_NUMBER-1; i++) {
        printf("%d < ", a[i]);
    }
    printf("%d\n", a[i]);
    
    return 0;
}
#endif
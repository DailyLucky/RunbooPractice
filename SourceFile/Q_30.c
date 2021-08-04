// Q_30
/*
一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
 */


#include <stdio.h> 

int main(void) 
{
    // 看见网友字符串的解法，感觉很妙啊
    
    // 发现了一个值得思考的问题：内存误操作
    // 变量flag定义的位置不同可能会导致它的值在后面scanf时被修改，可以写篇文章记录下
    char num[6] = {'0'}; // 给终止符'\0'留个位置
    int i = 100;
    int flag = 1; 

    printf("Please enter a 5-digit number:");
    scanf("%s", num);  

    for (i=0; i<5/2; i++) {
        if (num[i] != num[4-i]) { // 不满足回文数条件
            flag = 0; 
            break;
        }
    }
    if (flag == 1) {
        printf("Is palindrome number!\n");
    } else { // flag == 0
        printf("Isn't palindrome number!\n");
    }
    return 0;
} 


#if 0
#include <stdio.h>


int main(void)
{
    int a[5] = {0}; // 存放5位数的5个位，因为需要进行比较，所以得先将各位保存下来
    int num = 10000; // 存放我们输入的5位数
    int i;
    int flag = 1;

    printf("Please enter a 5-digit number:");
    scanf("%d", &num);
    for (i=0; i<5; i++) {
        a[i] = num % 10;
        num /= 10;
    }
    for (i=0; i<5/2; i++) {
        if (a[i] != a[4-i]) { // 不满足回文数条件
            flag = 0; 
            break;
        }
    }
    if (flag == 1) {
        printf("Is palindrome number!\n");
    } else { // flag == 0
        printf("Isn't palindrome number!\n");
    }

    return 0;
}
#endif
// Q_82
/*
八进制转换为十进制
 */

// 先照着官网上的字符串方法处理，改天可以试着用栈来实现这个操作。%d，%o格式化输出就先不讨论了，这个就没意思了
#include <stdio.h>


int main(void)
{
    char num[10+1]; // 最多存放一个10位数，+1的目的是留一个位置给空字符(也称终止字符)'\0'
    int revert_num = 0;
    int i = 0;

    printf("Please enter a Octal number(no more than digits):");
    // gets_s(num, 11); 这个函数是C11标准下的，GCC还没有完善好，我就说咋个用不了
    gets(num);

    // 这种计算方法我开始就想不到，直接迭代几次就出结果了。我想的还是先找到数字的位数，
    // 然后从最后一位开始累加回去，其实还不太好实现，毕竟前面的位还需要计算出8的几次方。
    // 还是思维有些太惯性了，出来的方法也比较拉胯，希望通过练习能够达到惯性思维都得出不错
    // 方法的程度
    while (num[i] != '\0') { 
        revert_num = 8*revert_num + (num[i]-'0'); // -'0'这个操作可以将字符数字的值与整型数字对应起来，因为都是以ASCII值存放的
        i++;
    }
    printf("The number of Decimal format is: %d\n", revert_num);

    return 0;
}
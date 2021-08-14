// Q_82_Plus
/*
八进制转换为十进制
 */

// 先照着官网上的字符串方法处理，改天可以试着用栈来实现这个操作。%d，%o格式化输出就先不讨论了，这个就没意思了

// 来实现个输入8进制转为10进制，输入10进制转为8进制的程序
#include <stdio.h>

int DecToOct(const char *num);
int OctToDec(const char *num);
int main(void)
{
    char num[10+1]; // 最多存放一个10位数，+1的目的是留一个位置给空字符(也称终止字符)'\0'
    int revert_num = 0;
    int i = 0;

    printf("Please enter a Octal number(prefixed with no more than 8 digits, like 0o10): ");    
    gets(num);
    if (num[0]=='0' && (num[1]=='o'||num[1]=='O')) { //0o or 0O
        revert_num = OctToDec(num);
        printf("The number after reverting is: 0d%d\n", revert_num);
    } else if (num[0]=='0' && (num[1]=='d'||num[1]=='D')) { // 0d or 0D
        revert_num = DecToOct(num);
        printf("The number after reverting is: 0o%d\n", revert_num);
    } else { // 输入格式不正确
        printf("Input invaild!\n");
        return 0;
    }

    return 0;
}

int OctToDec(const char *num)
{
    int revert_num = 0;
    int i = 2;

    while (num[i] != '\0') { // 前两位为前缀，不参与计算
        revert_num = 8*revert_num + (num[i]-'0'); // -'0'这个操作可以将字符数字的值与整型数字对应起来，因为都是以ASCII值存放的
        i++;
    }
    return revert_num;
}

int DecToOct(const char *num)
{
    int revert_num = 0;
    int val_dec = 0;
    int temp[10] = {0};
    int i = 2;

    while (num[i] != '\0') { // 前两位为前缀，不参与计算。通过该循环计算出十进制数的值
        val_dec = 10*val_dec + (num[i]-'0'); 
        i++;
    }
    i = 0;
    while (val_dec != 0) { // 记录每次对8取余的结果
        temp[i] = val_dec % 8;
        val_dec /= 8;
        i++;
    }
    while (i > 0) { // 将取余得到的数组倒序处理得到最终结果
        revert_num = 10*revert_num + temp[i-1];
        i--;
    }
    return revert_num;   
}
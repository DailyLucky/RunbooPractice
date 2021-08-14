// Q_89
/*
某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规
则如下： 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交
换，第二位和第三位交换
 */

// 输入原始数据，然后输出加密的数据
#include <stdio.h>

int main(void)
{
    char data[5]; // 留出空终止字符的位置
    int i;
    char temp;

    printf("Please enter 4-digits raw data: ");
    scanf("%s", data);
    for (i=0; i<2; i++) { // 实现加密的同时进行数据的交换
        data[i] = (data[i]-'0'+5) % 10 + '0'; // -'0'是字符数字转换为整型数字，后面的+'0'是将计算得到的加密整型数字转换为字符数字
        temp = data[i];
        data[i] = (data[3-i]-'0'+5) % 10 + '0'; // 这一步右边的结果是加密后的data[3-i]，直接将它的值赋给data[i]，实现交换
        data[3-i] = temp;
    }
    printf("The encrypted data is: %s", data);

    return 0;
}


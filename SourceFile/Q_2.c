// 题目：企业发放的奖金根据利润提成。

// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。
// 从键盘输入当月利润I，求应发放奖金总数？


#include <stdio.h>

int main(void)
{
    float I = 0.0f; // 利润
    float bonus = 0.0f; // 总奖金
    printf("Please enter the profit: ");
    scanf("%f", &I);

    if (I <= 10) { // I<0的情况不知道需不需要排除
        bonus = I * 0.1;
    }
    else if (I <= 20) {
        bonus = 10*0.1 + (I-10)*0.075;
    }
    else if (I <= 40) {
        bonus = 10*0.1 + 10*0.075 + (I-20)*0.05;
    }
    else if (I <= 60) {
        bonus = 10*0.1 + 10*0.075 + 20*0.05 + (I-40)*0.03;
    }
    else if (I <= 100) {
        bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 + (I-60)*0.015;
    }
    else {// 超过100万
        bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 + 40*0.015 + (I-100)*0.01;
    }
    printf("Total bonus payable is %f w", bonus);
    return 0;
}
// 官方解答
#if 0
#include<stdio.h>
int main()
{
    double i;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("你的净利润是：\n");
    scanf("%lf",&i);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(i<=100000) {
        bonus=i*0.1;
    } else if(i<=200000) {
        bonus=bonus1+(i-100000)*0.075;
    } else if(i<=400000) {
        bonus=bonus2+(i-200000)*0.05;
    } else if(i<=600000) {
        bonus=bonus4+(i-400000)*0.03;
    } else if(i<=1000000) {
        bonus=bonus6+(i-600000)*0.015;
    } else if(i>1000000) {
        bonus=bonus10+(i-1000000)*0.01;
    }
    printf("提成为：bonus=%lf",bonus);
 
    printf("\n");
}
#endif
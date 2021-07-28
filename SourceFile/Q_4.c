// Q_4
// 输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>

// 闰年判定函数
// 返回值：1->闰年， 0->平年
int IsLeapYear(int year);

int main(void)
{
    int year = 0;
    int month = 0;
    int day = 0;
    // 输入部分
    // 没有进行输入有效性的判断
    printf("Please enter the date like xxxx xx xx: ");
    scanf("%d %d %d", &year, &month, &day);

    // 计算部分
    month -= 1;
    switch (month) {
        case 11: {
            day += 30;
        }
        case 10: {
            day += 31;
        }
        case 9: {
            day += 30;
        }
        case 8: {
            day += 31;
        }
        case 7: {
            day += 31;
        }
        case 6: {
            day += 30;
        }
        case 5: {
            day += 31;
        }
        case 4: {
            day += 30;
        }
        case 3: {
            day += 31;
        }
        case 2: {
            day += 28;
        }
        case 1: {
            day += 31;
        }
        default:
            ; // do nothing
    }
    day += IsLeapYear(year) ? 1 : 0;
    printf("Total days number is %d\n", day);

    return 0;
}

int IsLeapYear(int year)
{
    if ((year%4==0 && year%100!=0) || year%400==0) {
        return 1; // 是闰年，返回1，直接退出程序
    }
    
    return 0; // 非闰年，返回0
}

// 官方解答
#if 0
#include <stdio.h>
int main()
{
    int day,month,year,sum,leap;
    printf("\n请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
    scanf("%d,%d,%d",&year,&month,&day);  // 格式为：2015,12,10
    switch(month) // 先计算某月以前月份的总天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    sum=sum+day; // 再加上某天的天数
    if(year%400==0||(year%4==0&&year%100!=0)) {// 判断是不是闰年
        leap=1;
    } else {
       leap=0;
    }
    if(leap==1&&month>2) { // *如果是闰年且月份大于2,总天数应该加一天
        sum++;
    }
    printf("这是这一年的第 %d 天。",sum);
    printf("\n");
}
#endif
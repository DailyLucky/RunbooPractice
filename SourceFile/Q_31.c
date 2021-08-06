// Q_31
/*
请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母
 */


#include <stdio.h> 

int main(void) 
{
    char ch = '0';

    printf("Please enter a lowercase letter: ");
    scanf("%c", &ch);
    getchar(); // 把回车吸收掉，getchar()可以吸收掉单个任意字符
    switch (ch) {
        case 'm': {
            printf("Monday\n");
            break;
        }
        case 't': {
            printf("Please enter next letter: ");
            scanf("%c", &ch); // 可以通过scanf(" %c", %ch);来吸收空白符，用在这里就是把回车符给吸收掉
                              // 任何格式字符串中的单个空白符处理所有来自输入的可用连续空白符（如同通过于循环中调
                              // 用 isspace 确定）。注意格式字符串中 "\n" 、 " " 、 "\t\t" 或其他空白无区别。
            if (ch =='u') {
                printf("Tuesday\n");
            } else if (ch == 'h'){
                printf("Thursday\n");
            } else {
                printf("No matching\n");
            }
            break;
        }
        case 'w': {
            printf("Wednesday\n");
            break;           
        }
        case 'f': {
            printf("Friday\n");
            break;           
        }   
        case 's': {
            printf("Please enter next letter: ");
            scanf("%c", &ch);
            if (ch =='a') {
                printf("Saturday\n");
            } else if (ch == 'u'){
                printf("Sunday\n");
            }  else {
                printf("No matching\n");
            }
            break;
        } 
        default: {
            printf("No matching\n");
        }  
    } 
    return 0;
}

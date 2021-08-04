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
    getchar(); // 把回车吸收掉
    switch (ch) {
        case 'm': {
            printf("Monday\n");
            break;
        }
        case 't': {
            printf("Please enter next letter: ");
            scanf("%c", &ch);
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
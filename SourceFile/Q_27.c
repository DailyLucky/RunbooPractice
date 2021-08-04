// Q_27
/*
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
 */


#include <stdio.h>

void InputReverse(int depth);

int main(void)
{
    int depth = 5; // 打印5个字符
    printf("Please enter 5 characters: ");
    InputReverse(depth);

    return 0;
}

void InputReverse(int depth) {
    char ch = '0';
    ch = getchar();
    if (depth == 5) {
        printf("The reverse result is: ");
    }
    if (depth > 1) { // 递归深度为5
        InputReverse(--depth);
    }
    printf("%c", ch);
    return;
}


#if 0
void InputReverse();

int main(void)
{
    printf("Please enter some characters: ");
    InputReverse();

    return 0;
}

void InputReverse() {

    char ch = '0';
    ch = getchar();

    if (ch != '\n') { // 临界条件
        InputReverse();
    }
    if (ch == '\n') {
        return ; // 把最后的换行符给屏蔽掉
    }
    printf("%c", ch);
    return;
}

#endif
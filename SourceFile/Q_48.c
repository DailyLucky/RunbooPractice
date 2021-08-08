// Q_48
/*
宏#define命令练习3
 */


#include <stdio.h>

#define EQU ==
#define INT int
#define ADD +

int main(void) 
{
    int val = 0;
    INT val_2 = 99;

    if (val EQU 0) {
        printf("%d\n", val);
        val = val ADD val_2;
    }
    printf("%d\n", val);
    return 0;
}


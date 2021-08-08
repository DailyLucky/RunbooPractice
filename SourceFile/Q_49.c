// Q_49
/*
宏#define命令练习3
 */


#include <stdio.h>

#define MIN
#define MAX_NUM(a, b)  ((a<b)?b:a)
#define MIN_NUM(a, b)  ((a<b)?a:b)

int main(void) 
{
    int num_1 = 10;
    int num_2 = 20;
#ifdef MAX
    printf("The max number is %d\n", MAX_NUM(num_1, num_2));
#else
    printf("The min number is %d\n", MIN_NUM(num_1, num_2));
#endif

#ifndef MIN
    printf("The max number is %d\n", MAX_NUM(num_1, num_2));
#else
    printf("The min number is %d\n", MIN_NUM(num_1, num_2));
#endif

#undef MIN
#define MAX
#ifdef MAX
    printf("The max number is %d\n", MAX_NUM(num_1, num_2));
#else
    printf("The min number is %d\n", MIN_NUM(num_1, num_2));
#endif

#ifndef MIN
    printf("The max number is %d\n", MAX_NUM(num_1, num_2));
#else
    printf("The min number is %d\n", MIN_NUM(num_1, num_2));
#endif
    return 0;
}


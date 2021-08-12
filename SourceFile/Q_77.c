// Q_77
/*
填空练习（指向指针的指针）
 */

#include <stdio.h>

int main(void)
{
    const char *s[] = {"Tang", "Rui", "Ni", "Hao", "!"};
    const char **dual_ptr = NULL;
    int i;

    for (i=0; i<5; i++) {
        dual_ptr = &s[i]; // 数组元素s[i]是指向字符串常量的指针，再加上&就是指针的指针
        printf("%s\n", *dual_ptr);
    }


    return 0;
}
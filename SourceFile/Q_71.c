// Q_71
/*
编写input()和output()函数输入，输出5个学生的数据记录
 */

#include <stdio.h>

typedef struct student {
    char name[20];
    char sex;
    int age;
} Student, *Stu_ptr;

void input(Student stu[], int stu_num);
void output(Student stu[], int stu_num);

int main(void) 
{
    Student stu_array[3] = {{"0", 'M', 18}};

    printf("Please enter 5 students' information: \n");
    input(stu_array, 5);
    printf("Output is:\n");
    output(stu_array, 5);

    return 0;
}

void input(Student stu[], int stu_num)
{
    int i;

    for (i=0; i<stu_num; i++) {
        scanf("%s %c %d", &stu[i].name, &stu[i].sex, &stu[i].age);
    }
    return;
}

void output(Student stu[], int stu_num)
{
    int i;

    for (i=0; i<stu_num; i++) {
        printf("%s %c %d\n", stu[i].name, stu[i].sex, stu[i].age);
    }
    return;    
}

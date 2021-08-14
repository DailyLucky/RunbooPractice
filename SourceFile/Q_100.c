// Q_100
/*
有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），
计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中
 */


// 最后一题了，感谢菜鸟的C经典100例，虽然题目都很基础，不过我还是学到了不少东西。在编写简单的小程序时
// 比以前要熟练很多，编程确确实实是需要多敲代码的。不要总是看书，看视频学习而不去实践，自己多动手写一写，
// 量变引起质变，多多码代码，加油！！！

#include <stdio.h>
#include <string.h>

typedef struct {
    char sid[3+1]; // 3位学号加空终止字符
    char sname[15+1];
    int sscore[3];
} Student;
#define STUDENT_NUM  2

int main(void)
{
    Student stu[STUDENT_NUM];
    FILE *fp = NULL;
    int i;
    float average_score[STUDENT_NUM] = {0};

    printf("Please enter 5 students information:\n");
    for (i=0; i<STUDENT_NUM; i++) {
        scanf("%s%s%d%d%d", &stu[i].sid, &stu[i].sname, &stu[i].sscore[0], &stu[i].sscore[1], &stu[i].sscore[2]);
    }
    for (i=0; i<STUDENT_NUM; i++) {
        average_score[i] = (stu[i].sscore[0]+stu[i].sscore[1]+stu[i].sscore[2]) / 3.0; 
    }
    fp = fopen("stud.txt", "w");
    for (i=0; i<STUDENT_NUM; i++) {
        // 名字长度一般不太一样，为了整齐度就选择左对齐，且至少占10个位置
        fprintf(fp, "%s  %-10s%d %d %d %.3f\n", 
                stu[i].sid, stu[i].sname, stu[i].sscore[0], stu[i].sscore[1], stu[i].sscore[2], average_score[i]);
    }
    fclose(fp);
    return 0;
}
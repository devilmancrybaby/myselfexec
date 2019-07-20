//编写一段程序，输入6名学生2门课程(语文、数学)的分数，
//显示各门课程的总分和平均分，以及各个学生的总分和平均分。
#include <stdio.h>
int main(void) {
    int stu[6][2];
    int i, j;
    int sum1 = 0;
    int sum2 = 0;

    printf("输入学生分数: ");

    for (i = 0; i < 6; i++)
        for (j = 0; j < 2; j++) {
            printf("No.%d学生两门成绩: ", i + 1);
            scanf("%d", &stu[i][j]);
        }

    for (i = 0; i < 6; i++) {
        sum1+= stu[i][0];}
        printf("%d\n",sum1 );
    


    return 0;
}
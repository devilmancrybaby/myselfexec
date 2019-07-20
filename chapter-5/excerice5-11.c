//编写一段程序，输入6名学生2门课程(语文、数学)的分数，
//显示各门课程的总分和平均分，以及各个学生的总分和平均分。
#include <stdio.h>
int main(void) {
    int stu[6][2];
    int i, j;
    int sum1 = 0;
    int sum2 = 0;

    printf("输入学生分数: \n");

    for (i = 0; i < 6; i++)
        for (j = 0; j < 2; j++) {
            printf("No.%d学生第%d门成绩: ", i + 1, j + 1);
            scanf("%d", &stu[i][j]);
        }

    for (i = 0; i < 6; i++) {

        sum1 = stu[i][0] + stu[i][1];
        printf("第%d名学生成绩两门总分 %d,平均分%f\n", i, sum1,(double)sum1 / 2);
    }


    for (i = 0; i < 6; i++) {
        sum2 += stu[i][0];
    }

    printf("第一门总分%d,平均分%f\n", sum2,(double)sum2 / 6);


    for (i = 0; i < 6; i++) {
        sum2 += stu[i][1];
    }

    printf("第二门总分%d\n", sum2);


    return 0;
}
/*
  改写代码清单6-16的程序，将两次考试的分数存储在三维数组中。*/


#include <stdio.h>

/*将4行3列矩阵a和b的和存储在c中*/
void mat_add(const int a[4][3], const int b[4][3] , int c[4][3]) {
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
}

/*显示4行3列矩阵*/
void mat_print(const int m[4][3]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", m[i][j]);
        }

        putchar('\n');
    }
}

int main(void) {
    int i, j, k;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[4][3];
    int tensu3[2][4][3];

    mat_add(tensu1, tensu2, sum);/*求两次考试的分数之和*/

    puts("第一次考试的分数"); mat_print(tensu1); /*显示第一次考试的分数*/

    puts("第二次考试的分数"); mat_print(tensu2); /*显示第二次考试的分数*/

    puts("总分"); mat_print(sum); /*显示总分*/

    printf("\n");

    for (k = 0; k < 2; k++) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                if (k == 0) {
                    tensu3[k][i][j] = tensu1[i][j];
                } else {
                    tensu3[k][i][j] = tensu2[i][j];
                }
            }
        }
    }

    for (k = 0; k < 2; k++) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                printf(" %d ", tensu3[k][i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}



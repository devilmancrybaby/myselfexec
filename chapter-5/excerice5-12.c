//改写代码清单5-13的程序，将两次考试的分数存储在三维数组tensu中。


#include <stdio.h>

int main(void) {
    int i, j, k;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int tensu3[2][4][3];
    int sum[4][3];

    /*求两次考试的分数之和*/
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = tensu1[i][j] + tensu2[i][j];
        }
    }

    /*显示第一次考试的分数*/
    puts("第一次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu1[i][j]);
        }

        putchar('\n');
    }

    /*显示第二次考试的分数*/
    puts("第二次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu2[i][j]);
        }

        putchar('\n');
    }

    /*显示总分*/
    puts("总分");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }

        putchar('\n');
    }

    printf("\n");
    // // for (int k = 0; k < 2; k++) {
    // for (i = 0; i < 4; i++) {
    //     for (j = 0; j < 3; j++) {
    //         // if (k = 0) {
    //         //     tensu3[i][j][0] = tensu1[i][j];
    //         // } else
    //         // {tensu3[i][j][1] = tensu2[i][j];}

    //     }
    // }

    // }

    // for (i = 0; i < 4; i++) {
    //     for (j = 0; j < 3; j++) {
    //         // if (k = 0) {
    //         //     tensu3[i][j][0] = tensu1[i][j];
    //         // } else
    //         // {tensu3[i][j][1] = tensu2[i][j];}

    //     }
    // }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {

            tensu3[0][i][j] = tensu1[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            tensu3[1][i][j] = tensu2[i][j];
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


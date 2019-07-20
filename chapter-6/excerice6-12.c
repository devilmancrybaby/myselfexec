#include <stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
    int i, j, k;



    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                c[i][j] += b[i][k] * a[k][j];
            }
        }
    }



}

int main(void) {
    int a[4][3]={0};
    int b[3][4]={0};
    int c[3][3]={0};
    int i, j,k;


    puts("a组值");

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            printf("第%d行，第%d列的值:\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    puts("b组值");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            printf("第%d行，第%d列的值:\n", i + 1, j + 1);

            scanf("%d", &b[i][j]);

        }

    mat_mul(a, b, c);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", c[i][j]);

        }

        printf("\n");
    }

    return 0;
}

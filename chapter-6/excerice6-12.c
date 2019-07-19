#include <stdio.h>
int mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
    int i, j, k;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {

            printf("%d ", a[i][j]);
            printf("\n");
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            printf("%d ", b[i][j]);
            printf("\n");
        }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                c[i][j] += b[i][k] * a[k][j];
            }
        }
    }

    return c[i][j];

}

int main(void) {
    int a[4][3];
    int b[3][4];
    int c[3][3];
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            scanf("%d", &b[i][j]);

        }

    printf("%d", mat_mul(a, b, c));

    return 0;
}

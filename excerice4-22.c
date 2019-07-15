#include <stdio.h>
int main(void) {
    int a, b;
    int i, j;
    int max, min;

    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;

    for (i = 1; i <= min; i++) {
        for (j = 1; j <= max; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
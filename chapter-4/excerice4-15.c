#include <stdio.h>
int main(void) {
    int a, b;
    int i;

    printf("开始数值: "); scanf("%d", &a);
    printf("结束数值: "); scanf("%d", &b);

    for (i = a; i <= b; i++) {
        printf("%d     %.1f\n", i, (double)(i - 100) * 0.9);
    }

    return 0;
}
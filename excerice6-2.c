#include <stdio.h>

int min3(int a, int b, int c) {
    int min;

    min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) { min = c; }

    return min;
}

int main(void) {
    int a, b, c;
    printf("输入三个整数:");
    scanf("%d %d %d", &a, &b, &c);

    printf("输入较小值%d", min3(a, b, c));
    return 0;
}
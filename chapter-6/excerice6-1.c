#include <stdio.h>
int min2(int a, int b) {
    int min;
    min = (a < b) ? a : b;
    return min;
}

int main(void) {
    int a, b;
    // int min;

    printf("输入两个整数: ");
    scanf("%d %d", &a, &b);

    // min = min2(a, b);
    printf("较小的值为%d.\n", min2(a,b));
    return 0;
}
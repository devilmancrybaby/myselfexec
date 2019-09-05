#include <stdio.h>
int main(void) {
    int a, b;
    puts("请输入两个整数。");
    printf("整数A:\n"); scanf("%d", &a);
    printf("整数B:\n"); scanf("%d", &b);
    printf("它们的乘积是%d\n", a * b);

    return 0;
}
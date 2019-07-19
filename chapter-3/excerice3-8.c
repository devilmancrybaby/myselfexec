#include <stdio.h>
int main(void) {
    int a, b;
    int x;
    puts("请输入两个整数。");
    printf("整数1: ");
    scanf("%d", &a);
    printf("整数2: ");
    scanf("%d", &b);

    if (a > b) {
        x = a - b;
    } else {
        x = b - a;
    }

    printf("它们的差是%d。\n", x);
    return 0;
}
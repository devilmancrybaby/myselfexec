#include <stdio.h>
int main(void) {
    int a, b;
    int x;
    puts("请输入两个整数。");
    printf("整数A: "); scanf("%d", &a);
    printf("整数B: "); scanf("%d", &b);
    x = (a > b) ? a - b : b - a;

    if (x <= 10) {
        puts("它们的差小于等于10.");
    } else {
        puts("它们的差大于等于11.");
    }

    return 0;
}
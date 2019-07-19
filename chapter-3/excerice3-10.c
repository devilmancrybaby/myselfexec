#include <stdio.h>
int main(void) {
    int a, b, c;
    puts("请输入三个整数。");
    printf("整数1: "); scanf("%d", &a);
    printf("整数2: "); scanf("%d", &b);
    printf("整数3: "); scanf("%d", &c);

    if (a == b && b == c) {
        puts("三个数值都相等。");
    } else if (a == b || b == c || c == a) {
        puts("有两个数值相等。");
    } else {
        puts("三个数值各不相等。");
    }

    return 0;
}
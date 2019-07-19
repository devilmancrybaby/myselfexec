#include <stdio.h>
int main(void) {
    int a, b, c;
    int mina, minb;
    puts("输入3个整数。");

    printf("整数1: "); scanf("%d", &a);
    printf("整数2: "); scanf("%d", &b);
    printf("整数3: "); scanf("%d", &c);

    mina = (a < b) ? a : b;
    minb = (mina < c) ? mina : c;

    printf("最小值%d.\n", minb);
    return 0;
}
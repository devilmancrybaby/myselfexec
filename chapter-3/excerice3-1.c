#include <stdio.h>
int main(void) {
    int a, b;
    printf("整数A: "); scanf("%d", &a);
    printf("整数B: "); scanf("%d", &b);

    if (a % b) {
        printf("B不是A的约数。");
    }

    return 0;
}
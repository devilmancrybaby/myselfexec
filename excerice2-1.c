#include <stdio.h>
int main(void) {
    int a, b;
    printf("整数A: "); scanf("%d", &a);
    printf("整数B: "); scanf("%d", &b);
    printf("%d%%", a * 100 / b);
    return 0;
}
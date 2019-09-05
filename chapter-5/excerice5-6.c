#include <stdio.h>
int main(void) {
    double a;
    int b;

    scanf("%lf", &a);
    scanf("%d", &b);

    a = b = 1.5;

    printf("%f %d", a, b);
    return 0;
}
#include <stdio.h>
int main(void) {
    int sum = 0;
    int a, b;
    int max, min;
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);

    min = (a < b) ? a : b;
    max = (a > b) ? a : b;

    do {
        sum += min;
        min++;
    } while (min <= max);

    printf("%d", sum);
    return 0;
}
#include <stdio.h>
#define number 7
int main(void) {
    int i;
    int x[number];

    for (i = 0; i < number; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < number / 2; i++) {
        int temp = x[i];
        x[i] = x[number - 1 - i];
        x[number - 1 - i] = temp;
    }

    puts("颠倒！！！！");

    for (i = 0; i < number; i++) {
        printf("x[%d]=%d\n", i, x[i]);
    }

    return 0;

}
#include <stdio.h>
#define number 5
int main(void) {
    int i;
    int b[number];
    int a[number] = {34, 5, 65, 43, 64};
    int cnt = 0;

    for (i = 0; i < number; i++) {
        b[i] = a[i];
        cnt++;
    }

    printf("a[%d]=", cnt);
    printf("{");

    for (i = 0; i < number; i++) {
        printf("%d, ", b[i]);
    }

    printf("}");
    return 0;
}
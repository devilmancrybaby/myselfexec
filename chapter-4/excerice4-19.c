#include <stdio.h>
int main(void) {
    int no;
    int i;

    printf("输入一个整数: "); scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (no % i == 0)
            printf("%d", i);
        }

    return 0;
}
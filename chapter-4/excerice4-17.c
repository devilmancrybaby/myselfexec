#include <stdio.h>
int main(void) {
    int no;
    int i;

    printf("输入一个整数: "); scanf("%d", &no);

    for (i = 1; i <= no; i++) {

        printf("%d", i * i);

    }

    return 0;
}
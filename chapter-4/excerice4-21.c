#include <stdio.h>
int main(void) {
    int a, b;
    int no;

    printf("输入一个整数: ");
    scanf("%d", &no);

    for (a = 1; a <= no; a++) {
        

        for (b = 1; b<= no; b++) {
            putchar('*');

        }
            printf("\n");

    }

    return 0;
}
#include <stdio.h>
int main(void) {
    int no;
    int i;

    printf("输入一个整数: "); scanf("%d", &no);

    for (i = 0; i <= no; i++) {
        if (i % 2) {
            printf("%d", i);
        } else {
            printf(" ");
        }


    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main(void) {
    int no;
    int i;
    printf("显示多少个*: "); scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (i % 5 ) {
            putchar('*');
        } else {
            printf("*\n");
        }
    }

    printf("\n");
    return 0;
}
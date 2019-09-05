#include <stdio.h>
int main(void) {
    int i = 2;
    int no;


    printf("整数: "); scanf("%d", &no);

    while (i <= no) {


        printf("%d", i);
        i += 2;
    }

    return 0;
}
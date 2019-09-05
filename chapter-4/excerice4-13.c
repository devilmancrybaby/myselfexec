#include <stdio.h>
int main(void) {
    int no;
    int sum = 0;
    int i;
    printf("n的值"); scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        sum += i;
    }

    printf("1到%d的和为%d\n", no, sum);
    return 0;
}
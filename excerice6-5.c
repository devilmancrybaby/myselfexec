#include <stdio.h>
int sumup(int n) {
    int sum = 0;
    int i;

    while (i < n) {
        i++;
        sum += i;
    }

    return sum;
}

int main(void) {
    int a;

    printf("输入一个整数:\n");
    scanf("%d", &a);

    printf("输出1到%d所有整数和为%d\n", a, sumup(a));
    return 0;
}
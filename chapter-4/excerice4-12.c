#include <stdio.h>
int main(void) {
    int cnt = 0;
    int num;

    printf("输入一个正整数: ");
    scanf("%d", &num);

    while (num > 0) {
        num /= 10;
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
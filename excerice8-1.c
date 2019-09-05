#include <stdio.h>
#define diff(x,y) ((x)>(y))?((x)-(y)):((y)-(x))
int main(void) {
    int x, y;
    printf("输入两个整数: ");
    scanf("%d %d", &x, &y);
    return 0;
}
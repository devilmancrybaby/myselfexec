/*请定义一个函数式宏diff(x,y)，返回x、y二值之差。*/

#include <stdio.h>
#define diff(x,y) ((x>y)?(x-y):(y-x))

int main(void) {
    int x, y;

    printf("整数A:"); scanf("%d", &x);
    printf("整数B:"); scanf("%d", &y);

    printf("它们之间的差:%d。", diff(x, y));

    return 0;
}
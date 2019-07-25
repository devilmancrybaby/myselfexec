/*编写如下set_idx函数，接收元素类型为int型、元素个数为n的数组，
并为所有元素赋上和下标相同的值。

void set_idx(int *v,int n){•••}*/

#include <stdio.h>
void set_idx(int *v, int n) {
    int i;

    for (i = 0; i < n; i++) {
        *(v + i) = i;
    }
    }

int main(void) {
    int n = 6;
    int i;
    int a[n];
    int *v;
    v=a;
set_idx(a, n);
for(i=0;i<6;i++)
    printf("a[%d]=%d\n",i,a[i]);


    return 0;
}
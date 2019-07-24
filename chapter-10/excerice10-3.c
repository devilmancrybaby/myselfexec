/*编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。

void sort3(int *n1,int *n2,int *n3){...}*/

#include <stdio.h>

void sort3(int *n1, int *n2, int *n3) {
    int a[3] = {*n1, *n2, *n3};
    int i, j;
    int temp;

    for (i = 0; i < 2; i++) {
        for (j = 2; j > i; j--) {
            if (a[j - 1] > a[j]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
}

int main(void) {
    int n1 ;
    int n2 ;
    int n3 ;
    int i;

 
    sort3(&n1, &n2, &n3);
    return 0;
}
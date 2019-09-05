#include <stdio.h>

int min_of(const int v[], int n) {
    int i;
    int min = 0;

    for (i = 0; i < n; i++) {
        min = v[0];

        if (min > v[i]) { min = v[i]; }

    }

    return min;

}
#define number 5
int main(void) {
    int i;
    int a[number];
    printf("输入值");

    for (i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", min_of(a, 5));
    return 0;
}
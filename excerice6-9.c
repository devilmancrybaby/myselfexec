#include <stdio.h>
void rev_intary(int v[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("No.%d: %d\n", i + 1, v[n - i - 1]);
    }
}
#define n 5
int main(void) {
    int i;

    int a[n];


    for (i = 0; i < n; i++) {
        printf("No.%d: ", i + 1);

        scanf("%d", &a[i]);
    }

    rev_intary(a, n);
    return 0;
}
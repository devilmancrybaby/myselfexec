#include <stdio.h>
#define num 5
void intary_rcpy(int v1[], const int v2[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        v1[n - i - 1] = v2[i];
    }
}

int main(void) {
    int v1[num];
    int v2[] = {11, 22, 33, 44, 55};
    int i;

    intary_rcpy(v1, v2, num);

    for (i = 0; i < num; i++) {
        printf("No.%d=%d\n", i + 1, v1[i]);
    }

    return 0;
}
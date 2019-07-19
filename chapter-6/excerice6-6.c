#include <stdio.h>
void alert(int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\a");
    }


}

int main(void) {
    int a;

    printf("输入响铃次数: ");
    scanf("%d", &a);
    alert(a);
    return 0;
}
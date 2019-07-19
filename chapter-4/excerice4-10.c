#include <stdio.h>
int main(void) {
    int i = 0;
    int no;

    printf("整数: ");
    scanf("%d", &no);

    while (i < no)

    {
        printf("*\n");
        i++;
    }

    return 0;
}
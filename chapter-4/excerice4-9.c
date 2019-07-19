#include <stdio.h>
int main(void) {
    int no;
    int i = 0;

    printf("整数:"); scanf("%d", &no);

    if (no > 0)
        while (i <	 no) {
            i++;

            if (i % 2) {
                putchar('+');
            } else {
                putchar('-');
            }
        }
    else {
        putchar(' ');
    }

    return 0;
}
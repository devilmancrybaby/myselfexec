/*编写如下函数，逆向显示字符串s的字符。

void rev_string(char s[]){	... }
例如，若s中接收的是"SEC",则将其数组更新为“CES”。*/

#include <stdio.h>

void rev_string(char s[]) {
    int i, j;

    while (s[i]) {
        i++;
    }

    for (j = 0; j < i; j++) {
        putchar(s[i - j - 1]);
    }
}

int main(void) {
    char s[] = {"CES"};

    rev_string(s);
    printf("\n");
    return 0;
}
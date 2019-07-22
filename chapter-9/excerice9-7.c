/*编写如下函数，使字符串s显示n次。
例如，若s和分别为"ABC"和3,则显示"ABCABCABC"。
*/

#include <stdio.h>

void put_stringn(const char s[], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        while (s[j]) {
            putchar(s[j++]);

        }

        j = 0;
    }

    return ;
}

int main(void) {
    char s[] = {"ABC"};
    int a = 3;

    put_stringn(s,a);
    return 0;
}

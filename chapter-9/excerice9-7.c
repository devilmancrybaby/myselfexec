/*编写如下函数，使字符串s显示n次。
例如，若s和分别为"ABC"和3,则显示"ABCABCABC"。
*/

#include <stdio.h>

void put_stringn(const char s[], int n) {
    int i, j = 0;

    for (i = 0; i < n; i++) {
        while (s[j]) {
            putchar(s[j++]);/*循环结束s[j]=\0,所以下面要把j复原 j=0*/

        }

        j = 0;/* 初始化s[j]*/
    }
}

int main(void) {
    char s[] = {"ABC"};
    int a = 3;

    put_stringn(s, a);
    return 0;
}

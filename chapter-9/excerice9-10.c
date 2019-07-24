/*编写如下函数，将字符串s中的数字字符全部删除。

void del_digit(char s[]){...}
例如传入"AB1C9“则返回"ABC"。*/

#include <stdio.h>
void del_digit(char s[]) {
    int i = 0;
    int j = 0;
    int n = 0;

    while (s[n]) {
        n++;
    }

    for (i = 0; i < n; i++) {
        if (s[i] < '0' || s[i] > '9') {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main(void) {
    char s[] = {"AB1C9"};

    del_digit(s); 
    printf("%s\n", s);
 
    return 0;
}
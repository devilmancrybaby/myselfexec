/*编写如下函数，返回字符串s中字符c的个数(没有则返回0)。*/
#include <stdio.h>
int str_chnum(const char s[]) {
    int i = 0;
    int cont = 0;


    for (; s[i] != '\0'; i++) {
        if (s[i] == 'c') {
            cont++;
        }
    }

    return cont;
}

int main(void) {
    char s[] = {"acccbvxcc"};
    int a = 0;
    a = str_chnum(s);
    printf("%d\n", a);
    return 0;

}
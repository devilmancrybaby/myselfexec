#include <stdio.h>
int main(void) {
    char s[] = "ABC";
    s[0] = '\0';

    printf("\"%s\"\n", s);
    return 0;
}
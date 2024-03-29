
/*改写代码清单11-6的程序，
将本文中学习的str_copy函数的调用作为printf函数的实参。*/

#include <stdio.h>

/*将字符串s复制到d*/
char* str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main(void)
{
    char str[128] = "ABC";
    char tmp[128];
    printf("str = \"%s\"\n", str);

    printf("复制的是：");
    scanf("%s", tmp);

    str_copy(str, tmp);

    puts("复制了。");
    printf("str = \"%s\"\n", str);

    return 0;
}
/*编写一段程序，对代码清单9-12进行如下改写。
1、将字符串的个数3改为更大的数，将其值定义为对象式宏。
2、将字符串的字符数6改为128,将其值也定义为对象式宏。
3、生成读取字符串数组的函数。和练习9-3—样，在读取"$$$$$"时停止读取操作。
4、显示"$$$$$"前输入的所有字符串。
*/


#include <stdio.h>

/*显示字符串数组*/
void put_strary(const char s[][6], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void)
{
    char cs[][6] = {"Turbo", "NA", "DOHC"};
    put_strary(cs, 3);

    return 0;
}
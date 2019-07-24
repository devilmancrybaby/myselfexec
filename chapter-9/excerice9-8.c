/*编写如下函数，实现字符串的逆向输出。例如，将"SEC* 显示为"CES"。*/

#include <stdio.h>
#include <string.h>


void put_stringr(const char s[]) {
	int i;
	i=strlen(s);
	printf("%d",i);

   // int i = 0;
    // int j = 0;
    // while(s[i])
    // {
    // 	i++;
    // }
    // printf("%d\n",i );
    while (j < i) {
        putchar( s[i - j - 1]);
               j++;
        
    
}

int main(void) {
    char s[] = {"SEC"};
    put_stringr(s);
    printf("\n");
    return 0;
}
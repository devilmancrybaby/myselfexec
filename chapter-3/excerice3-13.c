#include <stdio.h>
int main(void) {
    int month;
    printf("请输入月份: ");
    scanf("%d", &month);

    switch (month) {
    case 3 :
    case 4 :
    case 5 : printf("%d月是春天。\n", month); break;

    case 6 :
    case 7 :
    case 8 : printf("%d月是夏天。\n", month); break;

    case 9 :
    case 10 :
    case 11 : printf("%d月是秋天。\n", month); break;

    case 12 :
    case 1 :
    case 2 : printf("%d月是冬天。\n", month); break;

    default : puts("输入月份不正确。");
    }

    return 0;
}
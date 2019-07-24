/*编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。
void decrement_date(int *y,int *m,int *d){...}
void increment_date(int *y,int *m,int *d){...}
注意计算时要考虑到闰年的问题。
*/

#include <stdio.h>

void decrement_date(int *y, int *m, int *d) {

    if (*m == 2 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12) {


        if (*d < 2) {
            if (*m == 8 || *m == 2) {
                *d = 31;
                *m -= 1;
            } else if (*m == 3) {
                if ((*y % 4 == 0 && *y % 100 != 0) || *y % 400 == 0) {
                    *d = 29;
                } else {
                    *d = 28;
                }

                *m -= 1;
            } else {
                *d = 30;
                *m -= 1;
            }

        } else {
            *d -= 1;
        }
    }

    if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {


        if (*d < 2) {
            *d = 31;
            *m -= 1;
        } else {
            *d -= 1;
        }
    }

    if (*m == 1) {
        *y -= 1;
        *m = 12;
        *d = 31;
    }
}

void increment_date(int *y, int *m, int *d) {
    

}




int main(void) {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    decrement_date(&y, &m, &d);
    printf("%d %d %d\n", y, m, d);
    return 0;

}
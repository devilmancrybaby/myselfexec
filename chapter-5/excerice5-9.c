#include <stdio.h>
#define number 80
int main(void) {
    int i, j;
    int num;
    int tensu[number];
    int bunpu[11];
    int max;

    printf("请输入学生人数: ");

    do {
        scanf("%d", &num);

        if (num < 1 || num > number) {
            printf("请重新输入1-%d学生人数: ", number);
        }
    } while (num < 1 || num > number);

    printf("请输入%d学生分数。\n", number);

    for (i = 0; i < num; i++) {
        printf("No.%d: ", i + 1);


        do {
            scanf("%d", &tensu[i]);

            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("输入有误请重新输入:");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[(tensu[i] / 10)]++;
    }

    for (i = 0; i < 11; i++)
    	
        for (j = 0; j < bunpu[i]; j++) {
           printf(" ");}

        for(j=0;j< bunpu[i];j++)

            printf("*\n");
        


puts("\n---分布图---");
    max = bunpu[0];
    for (i = 1; i < 11; i++)
    {
        if (max < bunpu[i])
            max = bunpu[i];
    }
    for (j = max; j > 0; j--)
    {
        for (i = 0; i < 11; i++)
        {
            if (bunpu[i] >= j)
                printf(" *  ");
            else
                printf("    ");
        }
        putchar('\n');
    }
    putchar('\n');
    printf("---------------------------------------------\n");
    for (j = 0; j <= 100; j += 10)
    {
        printf(" %d ", j);
    }

    return 0;
}
#include <stdio.h>
#define a 3
#define b 4
int main(void) {
    int no[b][a];
    int num[a][b];
    int i, j;
   

               for (i = 0; i < b; i++)
        for (j = 0; j < a; j++) {
            scanf(" %d\n", &no[i][j]);
        }


    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++) {
            scanf("%d\n", &num[i][j]);
        }




    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++) {
          
            printf("%d\n", no[i][j]*num[j][i]);
        }

    return 0;
}
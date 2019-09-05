#include <stdio.h>
int main(void) {
    int i, j;

    for (j = 1; j <= 9; j++) {

        printf("    %d", j);

        

    }
 printf("\n");
printf("-————————————————————————————————\n");
   


    for (i = 1; i <= 9; i++) {

        printf("%3d", i);
        printf("|");

        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);

        }

        printf("\n");
    }

    return 0;
}
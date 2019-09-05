#include <stdio.h>
int main(void){
	int i, j;
	int len;

	scanf("%d",&len);
	for(i=1;i<len;i++){
		for(j=0;j<(len-i)*2-1;j++)
			printf("*");
		printf("\n");

		for(j=0;j<i;j++)
			putchar(' ');
	}
	printf("\n");
	return 0;
}
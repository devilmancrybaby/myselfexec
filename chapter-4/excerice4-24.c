#include <stdio.h>
int main(void){
	int len;
	int i, j;

	scanf("%d",&len);
	for (i=1;i<len;i++){
		for(j=0;j<len-i-1;j++)
			putchar(' ');
			
		for(j=0;j<(i-1)*2+1;j++)
			printf("*");
			printf("\n");
	}
	printf("\n");
	return 0;
}
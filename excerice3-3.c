#include <stdio.h>
int main(void){
	int no;
	printf("输入一个整数: ");scanf("%d",&no);

	if (no > 0){
		printf("该整数的绝对值为%d\n",no);
	}
	else{
		printf("该整数的绝对值为%d\n",-no);
	}
	return 0;
}
#include <stdio.h>
int main(void){
	int a, b, c, min;

	printf("整数1: ");
	scanf("%d",&a);

	printf("整数2: ");
	scanf("%d",&b);

	printf("整数#: ");
	scanf("%d",&c);

	min=a;
	if (b < min){
		min = b;
	}
	if (c < min ){
		min = c; 
	}

	printf("最小值: %d\n",min);

	return 0;
}
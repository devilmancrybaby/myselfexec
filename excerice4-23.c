#include <stdio.h>
int main(void){
int i,j;
int len,wei;

printf("长边:");scanf("%d",&len);
printf("短边:");scanf("%d",&wei);

for(i=0;i<len;i++){
	for(j=0;j<wei-(len-1);j++){
		
		printf("*");
	}
	printf("\n");

}
return 0;
}
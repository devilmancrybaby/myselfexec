#include <stdio.h>
int main(void){
	int stu[6][2];
	int i, j;

	printf("输入学生分数: ");

	for(i=0;i<6;i++)
		for(j=0;j<2;j++){
			printf("No.%d学生第%d成绩: ",i+1,j+1);
			scanf("%d",&stu[i][j]);}

			return 0;
}
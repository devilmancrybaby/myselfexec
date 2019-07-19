#include <stdio.h>
int main(void){
	int stu[6][2];
	int i, j;

	printf("输入学生分数: ");

	for(i=0;i<6;i++)
		for(j=0;j<2;j++){
			printf("No.%d学生两门成绩: ",i);
			scanf("%d",&stu[i][j]);}

			return 0;
}
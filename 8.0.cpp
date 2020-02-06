//输出 9*9 乘法口诀表
#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}

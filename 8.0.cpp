//��� 9*9 �˷��ھ���
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

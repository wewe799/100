//���� 3 �� 3 �еľ���ʵ�����Ӧλ�õ�������ӣ�������һ���¾���
#include<stdio.h>
int main(void)
{
	int a[3][3],b[3][3],c[3][3],i,j,cnt=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
			cnt++;
			{
				if(cnt==3)
				{
					printf("\n");
					cnt=0;
				}
			}
		}
	return 0;
}

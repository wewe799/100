//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
#include<stdio.h>
#define N 20
int main(void)
{
	int a[N],b[N]={0},n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				b[i]++;
		}
	for(i=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			printf("true");
			return 0;
		}
	 } 
	printf("false");
	return 0;
} 



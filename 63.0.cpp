//��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
#include<stdio.h>
#define N 20
int main(void)
{
	int n,m,a[N],i,b[N];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		a[i]=b[n-m+i];
	}
	for(i=m;i<n;i++)
	{
		a[i]=b[i-m];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 

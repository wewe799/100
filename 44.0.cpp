//��һ�������������
#include<stdio.h>
#define N 100
int main(void)
{
	int n,i,a[N];
	printf("��������Ԫ�ظ�����С��100����");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

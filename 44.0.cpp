//将一个数组逆序输出
#include<stdio.h>
#define N 100
int main(void)
{
	int n,i,a[N];
	printf("输入数组元素个数（小于100）：");
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

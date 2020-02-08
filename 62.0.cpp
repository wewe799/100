//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
#include<stdio.h>
#define N 10
int main(void)
{
	int a[N],n,i,max,maxi,min,mini,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxi=i;
		}
	}
	t=a[0];a[0]=a[maxi];a[maxi]=t;
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			mini=i;
		} 
	}
	t=a[n-1];a[n-1]=a[mini];a[mini]=t;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

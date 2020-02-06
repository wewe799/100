//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
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



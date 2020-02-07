//统计所有小于非负整数 n 的质数的数量
#include<stdio.h>
int main()
{
	int n,i,j,flag=0,cnt=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cnt++;
		}
	}
	printf("小于%d的质数有%d个",n,cnt);
	return 0;
}

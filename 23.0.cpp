//一个数如果恰好等于它的因子之和，这个数就称为"完数"。
//例如6=1＋2＋3.编程找出1000以内的所有完数
#include<stdio.h>
int main(void)
{
	int sum=0,i,j;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
			printf("%d\n",i);
	}
	return 0;
}

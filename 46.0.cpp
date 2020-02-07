//统计 1 到 100 之和
#include<stdio.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("1到100的和为%d\n",sum);
	return 0;
}

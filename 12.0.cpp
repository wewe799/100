//给定一个整数，写一个函数来判断它是否是 3 的幂次方
#include<stdio.h>
int f(int x)
{
	while(x)
	{
		x%=3;
		if(x==1||x==2)
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int x;
	scanf("%d",&x);
	if(f(x))printf("这个数不是3 的幂次方");
	else printf("这个数是3 的幂次方");
	return 0; 
}

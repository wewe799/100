//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<stdio.h>
int main(void)
{
	int n,i,cnt=0;
	scanf("%d",&n);
	while(n)
	{
		i=n%10;
		cnt++;
		n/=10;
		printf("%d",i);
	}
	printf("\n它是%d位数",cnt);
	return 0;
}

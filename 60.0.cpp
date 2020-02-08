//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转
#include<stdio.h>
int main(void)
{
	int n,x,y=0;
	scanf("%d",&n);
	if(n<0)n=-n;
	while(n)
	{
		x=n%10;
		n/=10;
		y=y*10+x;
	}
	printf("%d",y);
	return 0;
}

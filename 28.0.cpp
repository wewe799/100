//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和
#include<stdio.h>
int f(int n)
{
	if(n==1)return 1;
	else if(n==2)return 2;
	else 
	{
		return f(n-1)+f(n-2);
	}
}
int main(void)
{
	int i;
	float n,sum=0;
	for(i=1;i<=20;i++)
	{
		n=1.0*f(i+1)/f(i);
		sum+=n;
	}
	printf("%f",sum);
 } 

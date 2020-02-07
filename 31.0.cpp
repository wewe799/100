//利用递归方法求5!
#include<stdio.h>
int f(int n)
{
	int x;
	if(n==1) x=1;
	else x=n*f(n-1);
	return x;
}

int main(void)
{
	printf("%d",f(5));
	return 0;
}

//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
//假如兔子都不死，问每个月的兔子总数为多少？
#include<stdio.h>
int F(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return F(n - 1) + F(n - 2);
	}
}
int main(void)
{
	int n,x;
	scanf("%d", &n);
	x = F(n);
	printf("%d", x);
	return 0;
}


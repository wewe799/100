//编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n
#include<stdio.h>

double fun1(int n)
{
	int i = 2;
	double sum=0;
	while(i != n)
	{
		sum += 1.0 / i;
		i += 2;
	}
	sum += 1.0 / n;
	return sum;
}

double fun2(int n)
{
	int i = 1;
	double sum = 0;
	while(i != n)
	{
		sum += 1.0 / i;
		i += 2;
	}
	sum += 1.0 / n;
	return sum;
}

int main(void)
{
	int n;
	double result;
	scanf("%d",&n);
	if(n % 2 == 0)
	{
		result = fun1(n);
	}
	else 
	{
		result = fun2(n);
	}
	printf("%lf",result);
	return 0;
} 

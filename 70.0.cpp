//��дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���1/1+1/3+...+1/n
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

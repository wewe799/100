//�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣�
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


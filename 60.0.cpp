//����һ�� 32 λ���з�������������Ҫ�����������ÿλ�ϵ����ֽ��з�ת
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

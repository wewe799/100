//дһ����������� 1 �� n ���ֵ��ַ�����ʾ��
//1. ��� n ��3�ı��������"Fizz"��2. ��� n ��5�ı��������"Buzz"��3.��� n ͬʱ��3��5�ı�������� "FizzBuzz"
#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)
		{
			printf("FizzBuzz\n");
		}
		else if(i%3==0)
		{
			printf("Fizz\n");
		}
		else if(i%5==0)
		{
			printf("Buzz\n");
		}
		else printf("%d\n",i);
	}
	return 0;
}

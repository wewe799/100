//��дһ��������������һ���޷�������������������Ʊ��ʽ������λ��Ϊ '1' �ĸ�����Ҳ����Ϊ�������� �� 
#include<stdio.h>
int f(int n)
{
	int x,cnt=0;
	while(n)
	{
		x=n%2;
		if(x)
		{
			cnt++;
		}
		n/=2;	
	}
	return cnt;
}
int main(void)
{
	int n,i;
	scanf("%d",&n);
	i=f(n);
	printf("%d",i);
	return 0;
}

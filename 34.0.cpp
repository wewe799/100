//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
#include<stdio.h>
int main(void)
{
	int n,i,cnt=0;
	scanf("%d",&n);
	while(n)
	{
		i=n%10;
		cnt++;
		n/=10;
		printf("%d",i);
	}
	printf("\n����%dλ��",cnt);
	return 0;
}

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
#include<stdio.h>
int main(void)
{
	int n,g,s,q,w;
	scanf("%d",&n);
	g=n%10;
	s=n/10%10;
	q=n/1000%10;
	w=n/10000;
	if(g==w&&s==q)
	{
		printf("���ǻ�����");
	}
	else printf("�����ǻ�����");
	return 0; 
 } 

//����һ��������дһ���������ж����Ƿ��� 3 ���ݴη�
#include<stdio.h>
int f(int x)
{
	while(x)
	{
		x%=3;
		if(x==1||x==2)
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int x;
	scanf("%d",&x);
	if(f(x))printf("���������3 ���ݴη�");
	else printf("�������3 ���ݴη�");
	return 0; 
}

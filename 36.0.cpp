//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ
#include<stdio.h>
int main(void)
{
	char c,ch;
	printf("���������ڵ�����ĸ\n");
	c=getchar();
	switch(c)
	{
		case 'M':printf("����һ\n");break;
		case 'T':
			{
				printf("������ڶ�����ĸ\n");
				getchar();
				ch=getchar();
				switch(ch)
				{
					case'u':printf("���ڶ�");break;
					case'h':printf("������");break;
					default:printf("�������"); 
				}
			}
			break;
		case 'W':printf("������");break;
		case 'F':printf("������");break;
		case 'S':
		{
				printf("������ڶ�����ĸ\n");
				getchar();
				ch=getchar();
				switch(ch)
				{
					case'a':printf("������");break;
					case'u':printf("������");break;
					default:printf("�������"); 
				}
		 } 
		 break;
	}
	return 0;
 } 

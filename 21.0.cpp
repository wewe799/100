//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
#include<stdio.h>
int main(void)
{
	int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	char c;
	while(scanf("%c",&c)&&c!='\n')
	{
		if(c>='A'&&c<='z')
		{
			cnt1++;
		}
		else if(c==' ')
		{
			cnt2++;
		}
		else if(c>='0'&&c<='9')
		{
			cnt3++;
		}
		else cnt4++;
	}
	printf("Ӣ����ĸ��%d�����ո���%d����������%d���������ַ���%d��",cnt1,cnt2,cnt3,cnt4);
	return 0;
 } 

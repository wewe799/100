//дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤��
#include<stdio.h>

int strlen(char str[]);

int main(void)
{
	int len = 0;
	char str[100];
	gets(str);
	len = strlen(str);
	printf("���ַ����ĳ���Ϊ��%d",len);
	return 0;
 } 

int strlen(char str[])
{
	int i,len=0;
	for(i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

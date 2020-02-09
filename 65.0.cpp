//写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度
#include<stdio.h>

int strlen(char str[]);

int main(void)
{
	int len = 0;
	char str[100];
	gets(str);
	len = strlen(str);
	printf("该字符串的长度为：%d",len);
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

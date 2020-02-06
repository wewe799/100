//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
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
	printf("英文字母有%d个，空格有%d个，数字有%d个，其他字符有%d个",cnt1,cnt2,cnt3,cnt4);
	return 0;
 } 

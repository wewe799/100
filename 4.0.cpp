//输入某年某月某日，判断这一天是这一年的第几天
#include<stdio.h>
int main(void)
{
	int i,n,y,r,NO=0;
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&n,&y,&r);
	if(n%4==0&&n%100!=0||n%400==0)
	{
		for(i=0;i<y;i++)
		{
			NO+=a[i];
		}
		NO+=r;
		printf("%d",NO);
	}
	else
	{
		for(i=0;i<y;i++)
		{
			NO+=b[i];
		}
		NO+=r;
		printf("%d",NO);
	}
 } 

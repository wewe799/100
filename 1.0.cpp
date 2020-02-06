//有四个数字：1、2、3、4、能组成多少个互不相同且无重复数字的三位数 
#include<stdio.h>
int main(void)
{
	int i,ge,shi,bai,cnt=0;
	for(i=100;i<999;i++)
	{
		ge=i%10;
		shi=i%100/10;
		bai=i/100;
		if(ge<5&&shi<5&&bai<5&&ge>0&&shi>0&&bai>0)
			if(ge!=shi&&ge!=bai&&shi!=bai)
			{
				printf("%d\n",i);
				cnt++;
			}
	}
	printf("共%d个数",cnt);
	return 0;
 } 


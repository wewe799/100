//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
#include<stdio.h>
int main(void)
{
	int i,g,s,b;
	for(i=100;i<1000;i++)
	{
		g=i%10;
		s=i/10%10;
		b=i/100;
		if(i==g*g*g+s*s*s+b*b*b)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 

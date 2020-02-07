//求100之内的素数
#include<stdio.h>
int main(void)
{
	int i,j,flag=0;
	for(i=2;i<=100;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d\n",i);
	}
	return 0;
}


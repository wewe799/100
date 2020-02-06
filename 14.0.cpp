//判断101-200之间有多少个素数，并输出所有素数
#include<stdio.h>
int main(void)
{
	int i,j,flag=1,cnt=0;
	for(i=101;i<=200;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d\n",i);
			cnt++;
		}
		flag=1; 
	}
	printf("共%d个素数",cnt); 
	return 0;
}

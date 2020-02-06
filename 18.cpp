#include<stdio.h>
int main(void)
{
	int n1,n2,i;
	scanf("%d",&n1);
	for(i=0;i<7;i++)
	{
		scanf("%d",&n2);
		if(n1==n2)
		{
			printf("Lucky You!\n");
			break;
		}
		else if(n1>n2)printf("Too small\n");
		else if(n1<n2)printf("Too big\n");
	}
	if(i==7)printf("Game Over\n");
	return 0;
}

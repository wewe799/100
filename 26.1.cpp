#include<stdio.h>
int main(void)
{
	int i,n,j;
	for(i=1;i<4;i++)
	{
		for(j=i;j<=7-i;j++)
		{ 
			printf(" "); 
		}
		if(i%2)
		{
			{
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

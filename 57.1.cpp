#include<stdio.h>
#define N 10
int main(void)
{
	int i,j,a[N]={1};
	for(i=0;i<N;i++)
	{
		for(j=i;j>0;j--)
		{
			a[j]=a[j]+a[j-1];
		}
		for(j=0;j<=i;j++)
		{
			printf("%-5d",a[j]);
		}
		printf("\n");
	}
	return 0;
 } 

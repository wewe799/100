//对10个数进行排序
#include<stdio.h>
int main(void)
{
	int a[10],i,j,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 

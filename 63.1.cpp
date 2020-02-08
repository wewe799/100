#define N 20 
#include<stdio.h>

void change(int m,int n)
{
	int i,j,a[N];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=m;j++)
	{ 
		
		for(i=n;i>0;i--)
		{
		 	a[i]=a[i-1];	
	    }
	    a[0]=a[n];
	}
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",a[i]);
	 }
} 
int main(void)
{
	int i,j,a[N],m,n;
	scanf("%d %d",&n,&m);   
	change(m,n);
	return 0;
 } 


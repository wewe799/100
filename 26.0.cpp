//¥Ú”°¡‚–Œ 
#include<stdio.h>
int main()
{
    int n=4,i,j,k;
    //scanf("%d",&n);
    int m=n-1;        //  m=3 £¨n=4 
    for(i=1; i<n; i++)
    {
        for(k=m; k>0; k--)
        {
            printf(" ");
        }
        for(j=1; j<2*i; j++)
        {
            printf("*");
        }
        printf("\n");
        m--;
    }
    for(n=2*n-1;n>0;n--)
	{
    	printf("*");
	}
    printf("\n");
    n=1;
    for(i=i-1; i>0; i--)
    {
        for(k=0; k<n; k++)
        {
            printf(" ");
        }
        for(j=2*i-1; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
        n=n+1;
    }
    return 0;
}


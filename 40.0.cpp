//ͳ������С�ڷǸ����� n ������������
#include<stdio.h>
int main()
{
	int n,i,j,flag=0,cnt=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
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
		{
			cnt++;
		}
	}
	printf("С��%d��������%d��",n,cnt);
	return 0;
}
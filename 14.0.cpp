//�ж�101-200֮���ж��ٸ��������������������
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
	printf("��%d������",cnt); 
	return 0;
}

//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
//����6=1��2��3.����ҳ�1000���ڵ���������
#include<stdio.h>
int main(void)
{
	int sum=0,i,j;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
			printf("%d\n",i);
	}
	return 0;
}

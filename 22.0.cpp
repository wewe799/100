//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿���
#include<stdio.h>
int main(void)
{
	int a,n,sum=0,i,x;
	printf("����a��������Ҫ��ӵ����ֵĸ���\n");
	scanf("%d%d",&a,&n);
	x=a;
	for(i=0;i<n;i++)
	{
		sum+=a;
		a=a*10+x;
	}
	printf("s=%d\n",sum);
	return 0;
 } 

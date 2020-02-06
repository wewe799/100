//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制
#include<stdio.h>
int main(void)
{
	int a,n,sum=0,i,x;
	printf("输入a，再输入要相加的数字的个数\n");
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

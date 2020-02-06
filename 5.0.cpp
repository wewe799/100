//输入三个整数x,y,z，请把这三个数由小到大输出
#include<stdio.h>
int main(void)
{
	int x,y,z,t;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		t=y;
		y=x;
		x=t;
	}
	if(x>z)
	{
		t=x;
		x=z;
		z=t;
	}
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	printf("%d<%d<%d",x,y,z);
	return 0;
}

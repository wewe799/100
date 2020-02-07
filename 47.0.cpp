//求输入数字的平方，如果平方运算后小于 50 则退出
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(sqrt(n)<50)return 0;
	else printf("该数字的平方大于等于50");
	return 0;
}

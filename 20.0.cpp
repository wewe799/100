//写一个程序，输出从 1 到 n 数字的字符串表示。
//1. 如果 n 是3的倍数，输出"Fizz"；2. 如果 n 是5的倍数，输出"Buzz"；3.如果 n 同时是3和5的倍数，输出 "FizzBuzz"
#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)
		{
			printf("FizzBuzz\n");
		}
		else if(i%3==0)
		{
			printf("Fizz\n");
		}
		else if(i%5==0)
		{
			printf("Buzz\n");
		}
		else printf("%d\n",i);
	}
	return 0;
}

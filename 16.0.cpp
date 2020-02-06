/*
程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成： 

          (1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。

          (2)如果nk，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数你n, 重复执行第一步。

          (3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。
*/
#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{
		while(n!=i)
		{
			if(n%i==0)
			{
				printf("%d*",i);
				n=n/i;
			}
			else break;
		}
	}
	printf("%d",n);
	return 0;
}


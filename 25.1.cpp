#include <stdio.h>
#include <stdlib.h>

int Fun(int d)   //d回溯天数
{
	if (d == 1)
		return 1;                            
	else return 2 * (Fun(d - 1) + 1);
}

int main()   /*每天吃掉前一天的一半零一个*/
{
	int x, total;
	printf("请输入多少天后只剩下一个：\n");
	scanf("%d", &x);
	total = Fun(x);
	printf("共有%d个桃子\n",total);
	return 0;
}


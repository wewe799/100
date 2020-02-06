//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶
#include<stdio.h>
int f(int n)
{
	int y;
	if(n==1) y=1;
	else if(n==2) y=2;
	else y=f(n-1)+f(n-2);
	return y;
}
int main(void)
{
    int n,y;
    scanf("%d",&n);
    y=f(n);
    printf("%d",y);
    return 0;
}

//������������¥�ݡ���Ҫ n ������ܵ���¥����ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥��
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

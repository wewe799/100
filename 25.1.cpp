#include <stdio.h>
#include <stdlib.h>

int Fun(int d)   //d��������
{
	if (d == 1)
		return 1;                            
	else return 2 * (Fun(d - 1) + 1);
}

int main()   /*ÿ��Ե�ǰһ���һ����һ��*/
{
	int x, total;
	printf("������������ֻʣ��һ����\n");
	scanf("%d", &x);
	total = Fun(x);
	printf("����%d������\n",total);
	return 0;
}


#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int fun(int x)
{
	int j;
	double m = sqrt(x);
	for ( j = 2; j <= m; j++)
		if (x%j == 0) 
			return 0;
	return 1;
}
int main(void)
{
	int i,cnt=0;
	for ( i = 100; i <= 200; i++)
	{
		if (fun(i) == 1)
		{
			printf("%d\n", i);
			cnt++;
		}
	}
	printf("¹²%d¸öËØÊý",cnt);
	return 0;
}


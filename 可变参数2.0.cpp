//可变参数允许空参数
#include<stdio.h>
#define PRINT(format,...) printf(# format, ##  __VA_ARGS__)

int main(void)
{
	PRINT(num = %d\n,520);
	PRINT(Hello WE!\n);
	
	return 0;
}

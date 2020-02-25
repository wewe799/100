#include<stdio.h>
#include<stdlib.h> 
int main(void)
{
	int *ptr;
	
	ptr = (int *)malloc(sizeof(int));
	if(ptr == NULL)
	{
		printf("内存分配失败");
		exit(1);
	}
	
	printf("请输入一个整数：");
	scanf("%d",ptr);
	
	printf("你输入的数是：%d\n",*ptr); 
	free(ptr);
	
	printf("你输入的数是：%d\n",*ptr);//此时ptr为随机值 
	
	return 0; 
 } 

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,num;
	int count = 0;
	int *ptr = NULL;//���������г�ʼ��ΪNULL 
	
	do
	{
		printf("������һ��������(����-1��ʾ����)");
		scanf("%d",&num);
		count++;
		
		ptr =  (int *)realloc(ptr, count * sizeof(int));
		if(ptr == NULL)
		{
			exit(1);
		}
		
		ptr[count - 1] = num;
	} while(num != -1);
	
	printf("����������ֱ��ǣ�");
	for(i = 0; i < count; i++)
	{
	 	printf("%d  ",ptr[i]);
	}
	return 0;
}

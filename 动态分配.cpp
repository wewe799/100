#include<stdio.h>
#include<stdlib.h> 
int main(void)
{
	int *ptr;
	
	ptr = (int *)malloc(sizeof(int));
	if(ptr == NULL)
	{
		printf("�ڴ����ʧ��");
		exit(1);
	}
	
	printf("������һ��������");
	scanf("%d",ptr);
	
	printf("����������ǣ�%d\n",*ptr); 
	free(ptr);
	
	printf("����������ǣ�%d\n",*ptr);//��ʱptrΪ���ֵ 
	
	return 0; 
 } 

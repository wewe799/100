//��һ��3*3�������Խ���Ԫ��֮��
#include<stdio.h>
#define N 3//������Ϊ3�׾��󣩸���ʵ��Ҫ��˴����ԸĶ�
int main(void)
{    
	int i,j,a[N][N],sum=0;    
	printf("���������\n");    
	for(i=0;i<N;i++)        
		for(j=0;j<N;j++)            
		{
			scanf("%d",&a[i][j]);
		}    
	for(i=0;i<N;i++)        
	{
		sum+=a[i][i]; 
	}   
	printf("�Խ���֮��Ϊ��%d\n",sum);    
	return 0;
} 


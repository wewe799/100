//求一个3*3矩阵主对角线元素之和
#include<stdio.h>
#define N 3//（这里为3阶矩阵）根据实际要求此处可以改动
int main(void)
{    
	int i,j,a[N][N],sum=0;    
	printf("请输入矩阵：\n");    
	for(i=0;i<N;i++)        
		for(j=0;j<N;j++)            
		{
			scanf("%d",&a[i][j]);
		}    
	for(i=0;i<N;i++)        
	{
		sum+=a[i][i]; 
	}   
	printf("对角线之和为：%d\n",sum);    
	return 0;
} 


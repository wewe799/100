//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ
#include<stdio.h>
int main(void)
{
	double score;
	char rank;
	scanf("%lf",&score);
	rank=(score>=90&&score<=100?'A':score<60?'C':'B');
	printf("The %.2lf belongs to '%c'!\n",score,rank);
	return 0;
}


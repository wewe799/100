//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示
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


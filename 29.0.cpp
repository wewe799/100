//Çó1+2!+3!+...+20!µÄºÍ
#include<stdio.h>
double f(int n)
{
	int i;
	double mult=1;
	for(i=1;i<=n;i++)
	{
		mult*=i;
	}
	return mult;
}
int main(void)
{
	int i;
	double sum=0;
	for(i=1;i<=20;i++)
	{
		sum+=f(i);
	}
	printf("%.0lf",sum);
	return 0;
 } 

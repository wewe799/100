//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
#include<stdio.h>
int main(void)
{
	int n,g,s,q,w;
	scanf("%d",&n);
	g=n%10;
	s=n/10%10;
	q=n/1000%10;
	w=n/10000;
	if(g==w&&s==q)
	{
		printf("它是回文数");
	}
	else printf("它不是回文数");
	return 0; 
 } 

#include<stdio.h>

void hanoi(int n,char x, char y, char z);

int main(void) 
{
	int n;
	char x,y,z;
	printf("ÇëÊäÈëººÅµËþµÄ²ãÊý£º");
	scanf("%d",&n);
	
	hanoi(n,'x','y','z');
	return 0;
} 

void hanoi(int n,char x, char y, char z)
{
	if(n == 1) 
	{
		printf("%c --> %c\n", x,z);
	}
	else
	{
		hanoi(n-1, x,z,y);
		printf("%c --> %c\n",x,z);
		hanoi(n-1,y,x,z);
	}
}


//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母
#include<stdio.h>
int main(void)
{
	char c,ch;
	printf("请输入星期的首字母\n");
	c=getchar();
	switch(c)
	{
		case 'M':printf("星期一\n");break;
		case 'T':
			{
				printf("请输入第二个字母\n");
				getchar();
				ch=getchar();
				switch(ch)
				{
					case'u':printf("星期二");break;
					case'h':printf("星期四");break;
					default:printf("输入错误"); 
				}
			}
			break;
		case 'W':printf("星期三");break;
		case 'F':printf("星期五");break;
		case 'S':
		{
				printf("请输入第二个字母\n");
				getchar();
				ch=getchar();
				switch(ch)
				{
					case'a':printf("星期六");break;
					case'u':printf("星期日");break;
					default:printf("输入错误"); 
				}
		 } 
		 break;
	}
	return 0;
 } 

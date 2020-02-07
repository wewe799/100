//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include <stdio.h>
void print(int);
int main()
{
    printf("Input chars:\n");
    print(5);
    printf("\n");
    return 0;
}
void print(int n)
{
    char next;
    if(n==1)
    {
        next=getchar();
        printf("Output chars:\n");
        putchar(next);
    }
    else
    {
        next=getchar();
        print(n-1);
        putchar(next);
    }
}



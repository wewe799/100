//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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



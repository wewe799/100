/*ѭ���ṹϰ�⣺�����������
Description 
�Ӽ�������һ��С��10����������ӡ��������ɵİ�����Ρ�
Input 
�����һ�У�����n��ֵ��
Output 
���Ϊ2n-1�У���һ��Ϊ1���ڶ���Ϊ1 2 1��������n��Ϊ1 2 3 �� n ��3 2 1����n+1�к�n-1����ͬ����n+2����n-2����ͬ���Դ����ơ�
Sample Input 
5
Sample Output 
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 3 2 1
1 2 3 2 1
1 2 1
1
Source   */
#include "stdio.h"
int main() {
    int n,i,j;
    while(scanf("%d",&n)) {
 
        //������
        for(i=1; i<=n; i++) {
//            for(j=1; j<=n-i; j++) //���ո�
//                printf(" ");
            for(j=1; j<=i; j++)
                printf("%d",j);//�����1��n
            for(j=i-1; j>=1; j--)
                printf("%d",j);//�����n-1��1
            printf("\n");
        }
        //������
        for(i=n-1; i>=1; i--) {
//            for(j=1; j<=n-i; j++) //���ո�
//                printf(" ");
            for(j=1; j<=i; j++)
                printf("%d",j);//�����1��n
            for(j=i-1; j>=1; j--)
                printf("%d",j);//�����n-1��1
            printf("\n");
        }
    }
    return 0;
}


/*循环结构习题：输出数字菱形
Description 
从键盘输入一个小于10的整数，打印由数字组成的半边菱形。
Input 
输入仅一行，输入n的值。
Output 
输出为2n-1行；第一行为1，第二行为1 2 1，…，第n行为1 2 3 … n …3 2 1，第n+1行和n-1行相同，第n+2行与n-2行相同，以此类推。
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
 
        //上三角
        for(i=1; i<=n; i++) {
//            for(j=1; j<=n-i; j++) //画空格
//                printf(" ");
            for(j=1; j<=i; j++)
                printf("%d",j);//输出从1到n
            for(j=i-1; j>=1; j--)
                printf("%d",j);//输出从n-1到1
            printf("\n");
        }
        //下三角
        for(i=n-1; i>=1; i--) {
//            for(j=1; j<=n-i; j++) //画空格
//                printf(" ");
            for(j=1; j<=i; j++)
                printf("%d",j);//输出从1到n
            for(j=i-1; j>=1; j--)
                printf("%d",j);//输出从n-1到1
            printf("\n");
        }
    }
    return 0;
}


//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include <stdio.h>
int main()
{
    int i;
    double s, t;
    s = t = 100.0;
    for (i = 1; i <= 10; i++)
	{
        s /= 2;
        t += 2 * s;
    }
    printf("Distance=%lf, Height=%lf\n", t, s);
    return 0;
}


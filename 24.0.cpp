//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
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


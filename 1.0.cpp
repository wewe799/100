//���ĸ����֣�1��2��3��4������ɶ��ٸ�������ͬ�����ظ����ֵ���λ�� 
#include<stdio.h>
int main(void)
{
	int i,ge,shi,bai,cnt=0;
	for(i=100;i<999;i++)
	{
		ge=i%10;
		shi=i%100/10;
		bai=i/100;
		if(ge<5&&shi<5&&bai<5&&ge>0&&shi>0&&bai>0)
			if(ge!=shi&&ge!=bai&&shi!=bai)
			{
				printf("%d\n",i);
				cnt++;
			}
	}
	printf("��%d����",cnt);
	return 0;
 } 


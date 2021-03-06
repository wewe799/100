//创建一个链表
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof(struct student)

struct student *creat();   //创建链表
void print(struct student *head);   //打印链表

struct student
{
      int num;
      float score;
      struct student *next;
};

int n; //全局变量，用来记录存放了多少数据。

int main(void)
{
      struct student *stu;

      stu = creat();
      print( stu );

      printf("\n\n");
      system("pause");
      return 0;
}

struct student *creat()
{
      struct student *head;
      struct student *p1, *p2;
  
      p1 = p2 = (struct student *)malloc(LEN);

      printf("Please enter the num :");
      scanf("%d", &p1->num);
      printf("Please enter the score :");
      scanf("%f", &p1->score);

      head = NULL;     
      n = 0;    
      
      while( p1->num )
      {
            n++;
            if( 1 == n )
            {
                  head = p1;                 
            }
            else
            {
                  p2->next = p1;
            }

            p2 = p1;
            p1 = (struct student *)malloc(LEN);

            printf("\nPlease enter the num :");
            scanf("%d", &p1->num);
            printf("Please enter the score :");
            scanf("%f", &p1->score);
      }

      p2->next = NULL;

      return head;
}

void print(struct student *head)
{
      struct student *p;
      printf("\nThere are %d records!\n\n", n);

      p = head;
      if( head )
      {
            do
            {
                  printf("学号为 %d 的成绩是: %f\n", p->num, p->score);
                  p = p->next;
            }while( p );
      }
}

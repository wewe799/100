//反向输出一个链表
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createLink()//头插法
{
    int n;
    struct Node* head,*p;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;

    while(scanf("%d",&n) && n != -1)
    {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data = n;
        p->next = head->next;
        head->next= p;;
    }
    return head;
}

void print(struct Node* head)
{
    struct Node*p = head->next;
    while(p != NULL)
    {
       printf("%d\t",p->data);
       p=p->next;
    }
}

int main()
{
    struct Node*head;
    head = createLink();
    print(head);
    return 0;
}

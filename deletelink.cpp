#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node *next;
};

void insertNode(struct Node**head,int value)
{
	struct Node * previous;
	struct Node *current;
	struct Node *now;
	
	current = *head;
	previous = NULL;
	
	while(current != NULL && current->value < value)
	{
		previous = current;
		current = current->next;
	}
	now = (struct Node *)malloc(sizeof(struct Node));
	if(now == NULL)
	{
		printf("内存分配失败");
		exit(1);
	}
	
	now->value = value;
	now->next = current;
	if(previous == NULL)
	{
		*head = now;
	}
	else
	{
		previous->next = now;
	}
}

void printNode(struct Node *head)
{
	struct Node *current;
	
	current = head;
	while(current != NULL)
	{
		printf("%d ",current->value);
		current = current->next;
	}
	printf("\n");
}

void deleteNode(struct Node **head,int value)
{
	struct Node * previous;
	struct Node *current;
	struct Node *now;
	
	current = *head;
	previous = NULL;
	
	while(current != NULL && current->value !=  value)
	{
		previous = current;
		current = current->next;
	}
	if(current == NULL)
	{
		printf("找不到匹配的节点");
		exit(1); 
	}
	else 
	{
		if(previous == NULL)
		{
			*head = current->next;
		}
		else
		{
			previous->next = current->next;
		}
		free(current);
	 } 
 } 

int main(void)
{
	struct Node *head = NULL;
	int input;
	
	printf("开始测试插入整数...\n"); 
	while(1)
	{
		printf("请输入一个整数（输入-1表示结束）：");
		scanf("%d",&input);
		if(input == -1)
		{
			break;
		}
		insertNode(&head, input);
		
		printNode(head);
	}
	
	printf("开始测试删除整数...\n"); 
	while(1)
	{
		printf("请输入一个整数：");
		scanf("%d",&input);
		if(input == -1)
		{
			break;
		}
		deleteNode(&head, input);
		
		printNode(head);
	}
	
	return 0;
}


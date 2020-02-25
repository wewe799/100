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

int main(void)
{
	struct Node *head = NULL;
	int input;
	
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
	
	return 0;
}

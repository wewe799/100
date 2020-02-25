#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book
{
	char title[100];
	char author[40];
	struct Book * next;
};
struct Book *searchBook(struct Book *library,char*target);

void getInput(struct Book *book)
{
	printf("������������");
	scanf("%s",book->title);
	printf("���������ߣ�");
	scanf("%s",book->author);
}

void addBook(struct Book **library)
{
	struct Book *book;
	static struct Book *tail;//ÿ�ε���addBook���ᱻ��ʼ����������static 
	 
	book = (struct Book *)malloc(sizeof(struct Book));
	if(book == NULL)
	{
		printf("�ڴ����ʧ��"); 
		exit(1);
	}
	
	getInput(book);
	
	if(*library != NULL)
	{
		tail->next = book;
		book->next = NULL; 
	}
	else
	{
		*library = book;
		book->next = NULL;
	}
	tail = book;
}

void printLibrary(struct Book *library)
{
	struct Book *book;
	int count = 0;
	
	book = library;
	while(book != NULL)
	{
		printf("Book%d:",count);
		printf("������%s",book->title);
		printf("���ߣ�%s\n",book->author);
		book = book->next;
		count++;
	}
 } 

struct Book *searchBook(struct Book *library,char *target)
{
	struct Book *book;
	book = library;
	while(book!=NULL)
	{
		if(!strcmp(book->title,target) || !strcmp(book->author,target))
			break;
		book = book->next;
	}
	
	return book;
}

void printBook(struct Book *book)
{
	printf("������%s,���ߣ�%s",book->title,book->author); 
}
 
void releaseLibrary(struct Book **library)
{
	struct Book *temp;
	
	while(*library != NULL)
	{
		temp = *library;
		*library = (*library)->next;
		free(temp);
	}
}

int main(void)
{
	struct Book *library = NULL;
	struct Book *book;
	char input[128]; 
	char ch;
	
	while(1)
	{
		printf("�����Ƿ���Ҫ¼��ͼ����Ϣ��Y/N��");
		do
		{
			ch = getchar();
		 } while(ch != 'Y'&& ch != 'N');
		 
		if(ch == 'Y')
		{
			addBook(&library);
		 } 
		else
		{
			break;
		}
	}
	
	printf("�����Ƿ���Ҫ��ӡͼ����Ϣ��Y/N��");
	do
	{
		ch = getchar();
	} while(ch != 'Y'&& ch != 'N');
		 
	if(ch == 'Y')
	{
		printLibrary(library);
	} 
	
	printf("\n���������������ߣ�");
	scanf("%s",input);
	
	book=searchBook(library,input);
	if(book==NULL)
	{
		printf("�ܱ�Ǹû���ҵ�");
	}
	else
	{
		do
		{
			printf("���ҵ�����������ͼ��\n");
			printBook(book); 
		}while((book = searchBook(book->next,input) )!=NULL);
	}
	
	releaseLibrary(&library);
	
	return 0;
 } 



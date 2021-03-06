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
	printf("请输入书名：");
	scanf("%s",book->title);
	printf("请输入作者：");
	scanf("%s",book->author);
}

void addBook(struct Book **library)
{
	struct Book *book;
	static struct Book *tail;//每次调用addBook都会被初始化，所以用static 
	 
	book = (struct Book *)malloc(sizeof(struct Book));
	if(book == NULL)
	{
		printf("内存分配失败"); 
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
		printf("书名：%s",book->title);
		printf("作者：%s\n",book->author);
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
	printf("书名：%s,作者：%s",book->title,book->author); 
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
		printf("请问是否需要录入图书信息（Y/N）");
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
	
	printf("请问是否需要打印图书信息（Y/N）");
	do
	{
		ch = getchar();
	} while(ch != 'Y'&& ch != 'N');
		 
	if(ch == 'Y')
	{
		printLibrary(library);
	} 
	
	printf("\n请输入书名或作者：");
	scanf("%s",input);
	
	book=searchBook(library,input);
	if(book==NULL)
	{
		printf("很抱歉没能找到");
	}
	else
	{
		do
		{
			printf("已找到符合条件的图书\n");
			printBook(book); 
		}while((book = searchBook(book->next,input) )!=NULL);
	}
	
	releaseLibrary(&library);
	
	return 0;
 } 


